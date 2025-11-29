@protocol AWEAntiAddictStrategyThresholdUnitProtocol;

@interface AWEAntiAddictForceMaskAction : AWEAntiAddictBaseAction

@property (nonatomic) double countDownTime;
@property (nonatomic) double blockToTime;
@property (nonatomic) BOOL oldMask;
@property long long satisfiedStrategyIndex;
@property (retain) id<AWEAntiAddictStrategyThresholdUnitProtocol> satisfiedStrategy;

+ (id)moduleName;

- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)postInsertFeedNotificationInfo:(id)a0;
- (void)postDeleteFeedNotification;
- (void).cxx_destruct;
- (void)prepare;
- (void)begin;
- (void)end;
- (void)revoke;

@end
