@class NSMutableDictionary;

@interface GCMRedpointExposureControlModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *controlInfoDict;
@property (nonatomic) unsigned long long logicType;
@property (nonatomic) BOOL blockLog;

- (id)initWithRedPointLogicType:(unsigned long long)a0;
- (id)logicControlInfoKey;
- (void)updateLastRedPointDisppearTime;
- (void)saveRedPointTimeControlInfoDict;
- (BOOL)checkCanReExposureWithMaxCnt:(int)a0 minIntervalClickRedPoint:(double)a1;
- (BOOL)checkCanReExposureWithMaxCnt:(int)a0 minIntervalClickRedPoint:(double)a1 minIntervalBeforeLastShow:(double)a2 lastExitTimeLimit:(unsigned int)a3;
- (BOOL)checkIsOverLastShowInterval:(double)a0;
- (BOOL)checkIsOverSameDayMaxCntLimit:(unsigned long long)a0;
- (BOOL)checkIsOverLastExitTimeLimit:(unsigned int)a0;
- (BOOL)checkOverMinIntervalClickRedPoint:(double)a0;
- (void)logWithFormat:(id)a0;
- (BOOL)checkCanReExposure;
- (BOOL)checkIsSameDay:(id)a0 nowDate:(id)a1;
- (void)didShowNewRedPoint;
- (void).cxx_destruct;

@end
