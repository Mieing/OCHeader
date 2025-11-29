@class NSData;

@interface WloginTlv_0x122 : WloginTlv

@property (retain) NSData *G;
@property (retain) NSData *N;
@property (retain) NSData *Y;
@property (retain) NSData *S;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
