@class NSData;

@interface WloginTlv_0x105 : WloginTlv

@property (retain) NSData *acSig;
@property (retain) NSData *acPicData;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
