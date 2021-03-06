/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <memory>
#include "test.h"
#include "rtmp/rtmpmessage.h"

class RTMPPlan: public TestPlan
{
public:
	RTMPPlan() : TestPlan("RTMP test plan")
	{
		
	}
	
	
	virtual void Execute()
	{
		testFailedCommand();
	}
	
	void testFailedCommand()
	{
		//Create trans id
		BYTE buffer[] = {
			 0x02    ,0x4e    ,0x34    ,0xfd    ,0xea    ,0x43    ,0x41    ,0x13
			,0x0d    ,0xa5    ,0xe8    ,0x10    ,0xf0    ,0x40    ,0xb7    ,0x2b
			,0xf0    ,0xb1    ,0xc7    ,0xdf    ,0x7c    ,0x51    ,0xc0    ,0xbe
			,0xdd    ,0xc1    ,0x3b    ,0x67    ,0x69    ,0xca    ,0x9d    ,0xc3
			,0x40    ,0xec    ,0x68    ,0x22    ,0x9e    ,0xef    ,0x39    ,0x02
			,0x07    ,0x31    ,0x26    ,0x94    ,0x11    ,0x34    ,0x7e    ,0xf5
			,0xf8    ,0xec    ,0x26    ,0x60    ,0x3c    ,0x48    ,0xe0    ,0x13
			,0x47    ,0xd6    ,0x3f    ,0xc4    ,0x47    ,0x8a    ,0x33    ,0x7e
			,0x04    ,0xed    ,0x56    ,0x1d    ,0x9f    ,0xc8    ,0x30    ,0x7c
			,0x44    ,0xc7    ,0xcf    ,0x15    ,0x7b    ,0xde    ,0xf9    ,0xff
			,0x98    ,0x4d    ,0xb8    ,0x61    ,0x07    ,0x3f    ,0x8c    ,0x91
			,0xb6    ,0x05    ,0xdf    ,0x4f    ,0x08    ,0x2a    ,0xf0    ,0x3f
			,0xe9    ,0xfd    ,0x3c    ,0x22    ,0xe3    ,0x3f    ,0xcd    ,0xef
			,0xfa    ,0xdf    ,0xfb    ,0xff    ,0x83
		};
		
		RTMPCommandMessage cmd;
		cmd.Parse(buffer,sizeof(buffer));
		cmd.Dump();
		
	}
	
};

RTMPPlan rtmp;

