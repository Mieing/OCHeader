@class NSString;

@interface WloginTlv_0x140 : WloginTlv

@property unsigned short wDataVer;
@property (copy) NSString *sLoginHost;
@property unsigned short wLoginPort;
@property unsigned short wResvLen;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
