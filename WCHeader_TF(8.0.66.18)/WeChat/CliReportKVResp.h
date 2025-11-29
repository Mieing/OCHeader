@class HeavyUserRespInfo, NSMutableArray;

@interface CliReportKVResp : WXPBGeneratedMessage

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
@property (retain, nonatomic) HeavyUserRespInfo *heavyUserInfo;

+ (void)initialize;

- (void)setHeavyUserInfo:(id)a0;
- (id)heavyUserInfo;
- (void)setAskSvrStrategyInterval:(unsigned int)a0;
- (unsigned int)askSvrStrategyInterval;
- (void)setBanReportTime:(unsigned int)a0;
- (unsigned int)banReportTime;
- (void)setMaxValidDataTime:(unsigned int)a0;
- (unsigned int)maxValidDataTime;
- (void)setWhiteOrBlackUinStrategies:(id)a0;
- (id)whiteOrBlackUinStrategies;
- (void)setSpecialStrategies:(id)a0;
- (id)specialStrategies;
- (void)setGeneralStrategies:(id)a0;
- (id)generalStrategies;
- (void)setWhiteOrBlackUinVersion:(unsigned int)a0;
- (unsigned int)whiteOrBlackUinVersion;
- (void)setSpecialVersion:(unsigned int)a0;
- (unsigned int)specialVersion;
- (void)setGeneralVersion:(unsigned int)a0;
- (unsigned int)generalVersion;
- (void)setRet:(int)a0;
- (int)ret;

@end
