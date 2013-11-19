/*
 * File:   test_packets.h
 * Author: aaron
 *
 * Created on April 30, 2013, 8:51 AM
 */

#ifndef TEST_PACKETS_H
#define	TEST_PACKETS_H

namespace packets {

    /* used for debugging packets that may have caused an issue
     * such as byte alignment during updates.
     *
     * used in BGP::peer_established
     * UPDATE: peer->in_queue.push(test_packet#);
     *
     * also useful for unit testing
     */
#ifdef BGP_GDB_DEBUG_TEST_PACKET


    // length 0x7a
    const unsigned char pkt1[] = {
        0x00, 0x00, 0x00, 0x1d, 0x40, 0x01, 0x01,
        0x00, 0x40, 0x02, 0x0c, 0x02, 0x05, 0x4e, 0x1a, 0x11,
        0x54, 0x00, 0xd1, 0x02, 0xd1, 0x69, 0xb8, 0x40, 0x03, 0x04,
        0x45, 0x1f, 0x6e, 0xf1, 0x40, 0x06, 0x00, 0x18, 0xd6, 0x30,
        0x00, 0x10, 0x08a, 0x08f, 0x10, 0x8a, 0x94, 0x18, 0xd1, 0x16,
        0x33, 0x18, 0xa4, 0xe9, 0x12, 0x18, 0xcd, 0x46, 0x70, 0x18,
        0xa4, 0xe9, 0x0b, 0x18, 0xa4, 0xe9, 0x02, 0x18, 0xc0, 0xf0,
        0x88, 0x18, 0xa4, 0xe9, 0x74, 0x18, 0xa4, 0xe9, 0x19, 0x18,
        0xa4, 0xe9, 0x15, 0x18, 0xa4, 0xe9, 0x5d, 0x18, 0xa4, 0xe9,
        0x3b, 0x18, 0xa4, 0xe9, 0x21, 0x18, 0xa4, 0xe9, 0x1c, 0x18,
        0xa4, 0xe9, 0x18, 0x18, 0xa4, 0xe9, 0x0c, 0x18, 0xa4, 0xe9,
        0x08, 0x18, 0xa4, 0xe9, 0x04, 0x18, 0xa4, 0xe9, 0x03, 0x18,
        0xa4, 0x57, 0x0a, 0x10, 0x8a, 0x95
    };


    // length 0x5b
    const unsigned char pkt2[] = {
        0x00, 0x00, 0x00, 0x53, 0x40, 0x01,
        0x01, 0x02, 0x40, 0x02, 0x12, 0x02, 0x04, 0x4e, 0x1a,
        0x05, 0x13, 0x60, 0x94, 0x20, 0xb6, 0x01, 0x03, 0x52,
        0xfb, 0xff, 0x5e, 0x5b, 0xa0, 0xc0, 0x11, 0x20, 0x02,
        0x04, 0x00, 0x00, 0x4e, 0x1a, 0x00, 0x00, 0x05, 0x13,
        0x00, 0x00, 0x60, 0x94, 0x00, 0x00, 0x20, 0xb6, 0x01,
        0x03, 0x00, 0x00, 0x52, 0xfb, 0x00, 0x00, 0xff, 0x5e,
        0x00, 0x03, 0x00, 0xd2, 0x40, 0x03, 0x04, 0x50, 0xef,
        0xa0, 0x31, 0xc0, 0x07, 0x06, 0x20, 0xb6, 0xd4, 0x02,
        0x65, 0x9c, 0xc0, 0x08, 0x04, 0x05, 0x13, 0x75, 0x30,
        0x14, 0xd9, 0x49, 0xf0
    };


#endif
}

#endif	/* TEST_PACKETS_H */