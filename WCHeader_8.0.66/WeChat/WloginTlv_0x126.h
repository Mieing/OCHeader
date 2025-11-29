@class NSData;

@interface WloginTlv_0x126 : WloginTlv

@property unsigned short wVer;
@property (retain) NSData *randData;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
