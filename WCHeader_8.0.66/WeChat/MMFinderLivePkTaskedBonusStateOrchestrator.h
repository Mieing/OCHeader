@class MMFinderLivePkTaskedBonusBarView, NSString, MMLiveTaskId, MMFinderLivePkTaskedBonusModel;
@protocol MMFinderLivePkTaskedBonusStateDescriptor, MMFinderLivePkTaskedBonusStateOrchestratorDelegate;

@interface MMFinderLivePkTaskedBonusStateOrchestrator : NSObject

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSString *correlationId;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusModel *model;
@property (nonatomic) unsigned long long giftsVerificationStatus;
@property (nonatomic) double introPlayTime;
@property (retain, nonatomic) id<MMFinderLivePkTaskedBonusStateDescriptor> currentState;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusBarView *barView;
@property (readonly, nonatomic) BOOL inVisualState;
@property (readonly, nonatomic) double creditMultiplier;
@property (weak, nonatomic) id<MMFinderLivePkTaskedBonusStateOrchestratorDelegate> delegate;

- (id)initWithLiveTaskId:(id)a0;
- (void)dealloc;
- (void)updateWithBattlePlayerInfo:(id)a0 serverUnixEpochTimeInSeconds:(unsigned long long)a1;
- (void)updateWithModel:(id)a0 serverUnixEpochTimeWithLocalFraction:(double)a1;
- (void)invokeScheduledStateUpdate;
- (BOOL)validateReferencedGiftsInModelAndFetchMissing:(id)a0;
- (void)resetState;
- (id)liveTask;
- (void).cxx_destruct;

@end
