@interface WloginTlv_0x11f : WloginTlv

@property unsigned int dwExchangeTime;
@property unsigned int dwPriority;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;

@end
