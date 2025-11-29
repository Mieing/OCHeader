@interface WloginTlv_0x17 : WloginTlv

@property unsigned short wDataVer;
@property unsigned int dwTime;
@property unsigned int dwClientIP;
@property unsigned short wClientPort;
@property unsigned short wResvLen;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;

@end
