/*****************************************************************************
 * ts_strings.h : Descriptions for TS known values
 *****************************************************************************
 * Copyright (C) 2015-2016 - VideoLAN Authors
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/
#ifndef VLC_TS_STRINGS
#define VLC_TS_STRINGS

static const char * const ISO13818_1_other_descs[] =
{
    "ISO/IEC 13818-1 Reserved",
    "User Private",
};

static const char * const ISO13818_1_streamstypes_descs[] =
{
    "ISO/IEC Reserved",
    "ISO/IEC 11172 Video",
    "ISO/IEC 13818-2 Video or ISO/IEC 11172-2 constrained parameter video stream",
    "ISO/IEC 11172 Audio",
    "ISO/IEC 13818-3 Audio",
    "ISO/IEC 13818-1 private_sections",
    "ISO/IEC 13818-1 PES packets containing private data",
    "ISO/IEC 13522 MHEG",
    "ISO/IEC 13818-1 Annex A DSM CC",
    /* ^ 0x08 */
    "ITU-T Rec. H.222.1",
    "ISO/IEC 13818-6 type A",
    "ISO/IEC 13818-6 type B",
    "ISO/IEC 13818-6 type C",
    "ISO/IEC 13818-6 type D",
    "ISO/IEC 13818-1 auxiliary",
    "ISO/IEC 13818-7 Audio with ADTS transport",
    /* ^ 0x0F */
    "ISO/IEC 14496-2 Visual",
    "ISO/IEC 14496-3 Audio with LATM transport",
    "ISO/IEC 14496-1 SL-packetized or FlexMux stream carried in PES packets",
    "ISO/IEC 14496-1 SL-packetized or FlexMux stream carried in sections",
    "ISO/IEC 13818-6 Synchronized download protocol",
    "Metadata carried in PES packets",
    "Metadata carried in metadata_sections",
    "Metadata carried in ISO/IEC 13818-6 Data Carousel",
    "Metadata carried in ISO/IEC 13818-6 Object Carousel",
    "Metadata carried in ISO/IEC 13818-6 Synchronized download protocol",
    /* ^ 0x19 */
    "MPEG-2 IPMP Stream",
    "AVC video stream as defined in ITU-T Rec. H.264",
    "ISO/IEC 14496-3 Audio",
    "ISO/IEC 14496-17 Text",
    "ISO/IEC 23002-3 auxiliary video stream",
    "SVC video sub-stream as defined in ITU-T H.264 Annex G",
    /* ^ 0x1F */
    "MVC video sub-stream as defined in ITU-T H.264 Annex H",
    "Video stream conforming to one or more profiles as defined in ITU-T T.800",
    "Additional 3D View ITU-T H.262",
    "Additional 3D View ITU-T H.264",
    /* ^ 0x23 */
};

static const char *ISO13818_1_Get_StreamType_Description(uint8_t i_type)
{
    if( i_type <= 0x23 )
        return ISO13818_1_streamstypes_descs[i_type];
    else if (i_type >= 0x0F && i_type < 0x7F)
        return ISO13818_1_streamstypes_descs[0];
    else if( i_type == 0x7F )
        return ISO13818_1_streamstypes_descs[0x1A];
    else
        return ISO13818_1_other_descs[1];
}


#endif
