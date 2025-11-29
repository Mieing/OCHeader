@class NSData;

@interface WloginTlv_0x11d : WloginTlv

@property unsigned int dwAppid;
@property (retain) NSData *acSigKey;
@property (retain) NSData *acSig;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
