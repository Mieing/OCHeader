@class NSString;

@interface WloginTlv_0x118 : WloginTlv

@property unsigned int dwFlag;
@property (copy) NSString *sName;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
