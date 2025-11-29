@class NSData;

@interface WloginTlv_Buff : WloginTlv

@property (retain) NSData *acSigBuff;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (int)encode:(id)a0;
- (void)dealloc;
- (id)copy;

@end
