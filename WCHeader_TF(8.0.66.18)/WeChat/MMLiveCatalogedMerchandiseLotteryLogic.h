@class NSString, MMLiveCatalogedMerchandiseLotteryInfo, MMFinderLiveTaskId, MMLiveMulticastTimer, MMLiveMulticastTimerToken;

@interface MMLiveCatalogedMerchandiseLotteryLogic : NSObject <WCFinderLiveExt, MMLiveMulticastTimerSubscriber, MMLiveCatalogedMerchandiseLotteryQuestExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMLiveCatalogedMerchandiseLotteryInfo *lotteryInfo;
@property (retain, nonatomic) MMLiveMulticastTimer *timer;
@property (retain, nonatomic) NSString *currentQuestActivityId;
@property (readonly, nonatomic) MMLiveMulticastTimerToken *timerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)beginQuestForLotteryWithActivityId:(id)a0;
- (void)onCatalogedMerchandiseLotteryActivityInfoReceived:(id)a0;
- (void)onQuestCompletedWithBackendAuthorization;
- (void)onQuestFailedForAnonymity;
- (void)onQuestCompletedWithoutBackendAuthorization;
- (void)onTimerWithToken:(id)a0 tickedAtNominalTime:(struct { unsigned int x0; double x1; })a1;
- (void)invalidateLotteryInfo;
- (void)participateInLotteryWithActivityId:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
