@class NSMutableArray;

@interface VoipNatDetectSvr : WXPBGeneratedMessage

@property (nonatomic) unsigned int isp;
@property (nonatomic) unsigned int addrCnt;
@property (retain, nonatomic) NSMutableArray *addrs;

+ (void)initialize;

@end
