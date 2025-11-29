@class NSString;

@interface WloginTlv_0x113 : WloginTlv

@property unsigned int dwUin;
@property unsigned short wNameTag;
@property (copy) NSString *sName;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
