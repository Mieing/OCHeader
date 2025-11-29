@class VoipAddr;

@interface SpeedTestSvr : WXPBGeneratedMessage

@property (retain, nonatomic) VoipAddr *addr;
@property (nonatomic) unsigned int testCnt;
@property (nonatomic) unsigned int testGap;
@property (nonatomic) unsigned int timeout;
@property (nonatomic) unsigned int pktSize;

+ (void)initialize;

@end
