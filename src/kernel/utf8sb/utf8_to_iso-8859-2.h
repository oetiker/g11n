/*
 * Copyright (c) 1996-1999 by Sun Microsystems, Inc.
 * All rights reserved.
 */

#ifndef _UTF_8_TO_ISO_8859_2_H_
#define _UTF_8_TO_ISO_8859_2_H_

#pragma ident   "@(#)utf8_to_iso-8859-2.h	1.1 99/03/05 SMI"

static const to_sb_table_component_t u8_sb_tbl[] = {
	{  0x0000C280, 0x80  },
	{  0x0000C281, 0x81  },
	{  0x0000C282, 0x82  },
	{  0x0000C283, 0x83  },
	{  0x0000C284, 0x84  },
	{  0x0000C285, 0x85  },
	{  0x0000C286, 0x86  },
	{  0x0000C287, 0x87  },
	{  0x0000C288, 0x88  },
	{  0x0000C289, 0x89  },
	{  0x0000C28A, 0x8A  },
	{  0x0000C28B, 0x8B  },
	{  0x0000C28C, 0x8C  },
	{  0x0000C28D, 0x8D  },
	{  0x0000C28E, 0x8E  },
	{  0x0000C28F, 0x8F  },
	{  0x0000C290, 0x90  },
	{  0x0000C291, 0x91  },
	{  0x0000C292, 0x92  },
	{  0x0000C293, 0x93  },
	{  0x0000C294, 0x94  },
	{  0x0000C295, 0x95  },
	{  0x0000C296, 0x96  },
	{  0x0000C297, 0x97  },
	{  0x0000C298, 0x98  },
	{  0x0000C299, 0x99  },
	{  0x0000C29A, 0x9A  },
	{  0x0000C29B, 0x9B  },
	{  0x0000C29C, 0x9C  },
	{  0x0000C29D, 0x9D  },
	{  0x0000C29E, 0x9E  },
	{  0x0000C29F, 0x9F  },
	{  0x0000C2A0, 0xA0  },
	{  0x0000C2A4, 0xA4  },
	{  0x0000C2A7, 0xA7  },
	{  0x0000C2A8, 0xA8  },
	{  0x0000C2AD, 0xAD  },
	{  0x0000C2B0, 0xB0  },
	{  0x0000C2B4, 0xB4  },
	{  0x0000C2B8, 0xB8  },
	{  0x0000C381, 0xC1  },
	{  0x0000C382, 0xC2  },
	{  0x0000C384, 0xC4  },
	{  0x0000C387, 0xC7  },
	{  0x0000C389, 0xC9  },
	{  0x0000C38B, 0xCB  },
	{  0x0000C38D, 0xCD  },
	{  0x0000C38E, 0xCE  },
	{  0x0000C393, 0xD3  },
	{  0x0000C394, 0xD4  },
	{  0x0000C396, 0xD6  },
	{  0x0000C397, 0xD7  },
	{  0x0000C39A, 0xDA  },
	{  0x0000C39C, 0xDC  },
	{  0x0000C39D, 0xDD  },
	{  0x0000C39F, 0xDF  },
	{  0x0000C3A1, 0xE1  },
	{  0x0000C3A2, 0xE2  },
	{  0x0000C3A4, 0xE4  },
	{  0x0000C3A7, 0xE7  },
	{  0x0000C3A9, 0xE9  },
	{  0x0000C3AB, 0xEB  },
	{  0x0000C3AD, 0xED  },
	{  0x0000C3AE, 0xEE  },
	{  0x0000C3B3, 0xF3  },
	{  0x0000C3B4, 0xF4  },
	{  0x0000C3B6, 0xF6  },
	{  0x0000C3B7, 0xF7  },
	{  0x0000C3BA, 0xFA  },
	{  0x0000C3BC, 0xFC  },
	{  0x0000C3BD, 0xFD  },
	{  0x0000C482, 0xC3  },
	{  0x0000C483, 0xE3  },
	{  0x0000C484, 0xA1  },
	{  0x0000C485, 0xB1  },
	{  0x0000C486, 0xC6  },
	{  0x0000C487, 0xE6  },
	{  0x0000C48C, 0xC8  },
	{  0x0000C48D, 0xE8  },
	{  0x0000C48E, 0xCF  },
	{  0x0000C48F, 0xEF  },
	{  0x0000C490, 0xD0  },
	{  0x0000C491, 0xF0  },
	{  0x0000C498, 0xCA  },
	{  0x0000C499, 0xEA  },
	{  0x0000C49A, 0xCC  },
	{  0x0000C49B, 0xEC  },
	{  0x0000C4B9, 0xC5  },
	{  0x0000C4BA, 0xE5  },
	{  0x0000C4BD, 0xA5  },
	{  0x0000C4BE, 0xB5  },
	{  0x0000C581, 0xA3  },
	{  0x0000C582, 0xB3  },
	{  0x0000C583, 0xD1  },
	{  0x0000C584, 0xF1  },
	{  0x0000C587, 0xD2  },
	{  0x0000C588, 0xF2  },
	{  0x0000C590, 0xD5  },
	{  0x0000C591, 0xF5  },
	{  0x0000C594, 0xC0  },
	{  0x0000C595, 0xE0  },
	{  0x0000C598, 0xD8  },
	{  0x0000C599, 0xF8  },
	{  0x0000C59A, 0xA6  },
	{  0x0000C59B, 0xB6  },
	{  0x0000C59E, 0xAA  },
	{  0x0000C59F, 0xBA  },
	{  0x0000C5A0, 0xA9  },
	{  0x0000C5A1, 0xB9  },
	{  0x0000C5A2, 0xDE  },
	{  0x0000C5A3, 0xFE  },
	{  0x0000C5A4, 0xAB  },
	{  0x0000C5A5, 0xBB  },
	{  0x0000C5AE, 0xD9  },
	{  0x0000C5AF, 0xF9  },
	{  0x0000C5B0, 0xDB  },
	{  0x0000C5B1, 0xFB  },
	{  0x0000C5B9, 0xAC  },
	{  0x0000C5BA, 0xBC  },
	{  0x0000C5BB, 0xAF  },
	{  0x0000C5BC, 0xBF  },
	{  0x0000C5BD, 0xAE  },
	{  0x0000C5BE, 0xBE  },
	{  0x0000CB87, 0xB7  },
	{  0x0000CB98, 0xA2  },
	{  0x0000CB99, 0xFF  },
	{  0x0000CB9B, 0xB2  },
	{  0x0000CB9D, 0xBD  },
};

#endif	/* _UTF_8_TO_ISO_8859_2_H_ */
