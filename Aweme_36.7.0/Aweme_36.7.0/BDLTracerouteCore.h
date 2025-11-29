@interface BDLTracerouteCore : NSObject

+ (unsigned short)makeChecksumFor:(const void *)a0 len:(unsigned long long)a1;
+ (id)formatIPv4Address:(struct in_addr { unsigned int x0; })a0;
+ (id)formatIPv6Address:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0;
+ (struct ICMPPacket { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; } *)unpackICMPv6Packet:(char *)a0 len:(int)a1;
+ (struct ICMPPacket { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; } *)unpackICMPv4Packet:(char *)a0 len:(int)a1;
+ (struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)makeSockaddrWithAddress:(id)a0 port:(int)a1 isIPv6:(BOOL)a2;
+ (id)makeICMPPacketWithID:(unsigned short)a0 sequence:(unsigned short)a1 isICMPv6:(BOOL)a2;
+ (id)resolveHost:(id)a0;
+ (BOOL)isEchoReplyPacket:(char *)a0 len:(int)a1 isIPv6:(BOOL)a2;
+ (BOOL)isTimeoutPacket:(char *)a0 len:(int)a1 isIPv6:(BOOL)a2;

@end
