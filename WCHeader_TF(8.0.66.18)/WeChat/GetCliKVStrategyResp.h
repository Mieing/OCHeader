@class HeavyUserRespInfo, NSMutableArray;

@interface GetCliKVStrategyResp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) unsigned int generalVersion;
@property (nonatomic) unsigned int specialVersion;
@property (nonatomic) unsigned int whiteOrBlackUinVersion;
@property (retain, nonatomic) NSMutableArray *generalStrategies;
@property (retain, nonatomic) NSMutableArray *specialStrategies;
@property (retain, nonatomic) NSMutableArray *whiteOrBlackUinStrategies;
@property (nonatomic) unsigned int maxValidDataTime;
@property (nonatomic) unsigned int banReportTime;
@property (nonatomic) unsigned int askSvrStrategyInterval;
@property (nonatomic) unsigned int kvgeneralVersion;
@property (nonatomic) unsigned int kvspecialVersion;
@property (nonatomic) unsigned int kvwhiteOrBlackUinVersion;
@property (retain, nonatomic) NSMutableArray *kvgeneralStrategies;
@property (retain, nonatomic) NSMutableArray *kvspecialStrategies;
@property (retain, nonatomic) NSMutableArray *kvwhiteOrBlackUinStrategies;
@property (retain, nonatomic) HeavyUserRespInfo *heavyUserInfo;

+ (void)initialize;

@end
