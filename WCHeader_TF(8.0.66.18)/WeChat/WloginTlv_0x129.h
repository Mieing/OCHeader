@class NSString;

@interface WloginTlv_0x129 : WloginTlv

@property unsigned int dwHoldTime;
@property unsigned int dwTimeout;
@property (copy) NSString *phoneNo;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
