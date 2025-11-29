@class MMFinderLiveGiftGoalModel, NSString, NSMutableSet, MMFinderLiveTaskId, MMFinderLiveGiftGoalView;

@interface MMFinderLiveGiftGoalLogic : NSObject <MMFinderLiveRewardRecievingLogicExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveGiftGoalModel *currentGoal;
@property (retain, nonatomic) NSMutableSet *dismissedGoals;
@property (retain, nonatomic) NSMutableSet *receivedGoals;
@property (retain, nonatomic) NSMutableSet *animationPlayCommandReceivedGoals;
@property (weak, nonatomic) MMFinderLiveGiftGoalView *giftGoalView;
@property (nonatomic) unsigned long long giftGoalViewPreemptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)updateGoalWithBackendInfo:(id)a0;
- (void)dismissGoalWithId:(id)a0;
- (void)onReceivingGiftAnimationPlayCommand:(id)a0 forTaskId:(id)a1 vetoFlag:(BOOL *)a2;
- (void).cxx_destruct;

@end
