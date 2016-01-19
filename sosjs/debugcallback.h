#pragma once

#ifdef todo_implement

class debugcallback
{
public:
	debugcallback();
	~debugcallback();
};


#ifndef __OUT_HPP__

#define __OUT_HPP__

#include <string>

#include <sstream>

class StdioOutputCallbacks : public IDebugOutputCallbacks

{

private:

	std::string m_OutputBuffer;

	//

	//This buffer holds the output from the command execution.

	//

	CHAR m_OutPutBuffer[4096];

public:

	void InitOutPutBuffer();

	std::string GetOutputBuffer()

	{

		return m_OutputBuffer;

	};

	void ClearOutPutBuffer()

	{

		m_OutputBuffer = "";

	};

	STDMETHOD(QueryInterface)(

		THIS_

		IN REFIID InterfaceId,

		OUT PVOID* Interface

		);

	STDMETHOD_(ULONG, AddRef)(

		THIS

		);

	STDMETHOD_(ULONG, Release)(

		THIS

		);

	// IDebugOutputCallbacks.

	STDMETHOD(Output)(

		THIS_

		IN ULONG Mask,

		IN PCSTR Text

		);

};

extern StdioOutputCallbacks g_OutputCb;

#endif // #ifndef __OUT_HPP__

#endif