@class NSData;

@interface WloginTlv_0x132 : WloginTlv

@property (retain) NSData *accessToken;
@property unsigned int dwExpireTime;
@property (copy) NSData *openId;

- (void)dealloc;
- (int)decode:(char **)a0 andBuffLen:(int *)a1;

@end
