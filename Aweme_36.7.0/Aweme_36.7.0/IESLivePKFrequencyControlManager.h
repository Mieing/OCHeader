@class NSDictionary;

@interface IESLivePKFrequencyControlManager : NSObject

@property (nonatomic) BOOL disableFrequencyControl;
@property (nonatomic) double lastStartPKTime;
@property (nonatomic) long long initiativeEndPKTimes;
@property (copy, nonatomic) NSDictionary *refusedDic;
@property (nonatomic) double startPKControlIntervalForStartTooMuch;
@property (nonatomic) long long initiativeEndPKTimesLimit;
@property (nonatomic) double startPKControlIntervalForEndTooMuch;
@property (nonatomic) double continuousRefusedLimitInterval;
@property (nonatomic) long long refusedPKTimesLimit;
@property (nonatomic) double startPKControlIntervalForRefusedTooMuch;

+ (id)managerWithDiContext:(id)a0;

- (BOOL)controlStartPKWithInvitedUID:(id)a0 successHanlder:(id /* block */)a1;
- (void)countBehaviorForBad:(unsigned long long)a0;
- (BOOL)controlShowTipForPKState:(long long)a0;
- (void)countBehaviorForGood:(unsigned long long)a0;
- (void)p_controlRefusedTooMuch:(id)a0;
- (void)p_resetRefusedTooMuch:(id)a0;
- (id)init;

@end
