@interface IESLiveRevenueInteractAutoMatchModel : NSObject

@property (nonatomic) BOOL isHighWay;
@property (nonatomic) BOOL isPassivelySync;
@property (nonatomic) BOOL isInMultiAutoMatch;
@property (nonatomic) long long matchPhase;
@property (nonatomic) long long defaultLimitTime;
@property (nonatomic) long long accelerateLimitTime;
@property (nonatomic) long long inviteLimitTime;
@property (nonatomic) long long waitTimeLevel;
@property (nonatomic) unsigned long long autoMatchWaitdTime;
@property (nonatomic) unsigned long long autoMatchPredictWaitTime;

- (void)resolveRivalsRecommendAutoMatchInfo:(id)a0;
- (void)resolveAutoMatchInfoWithDefaultWaitLimit:(unsigned long long)a0 accelerateWaitLimit:(unsigned long long)a1 inviteLimitSec:(unsigned long long)a2 pkAutoMatchIndex:(unsigned long long)a3;
- (void)resolveGetPanelListAutoMatchInfo:(id)a0;
- (void)reset;

@end
