@class NSData;

@interface WloginTlv_0x125 : WloginTlv_Buff

@property (copy) NSData *openId;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
