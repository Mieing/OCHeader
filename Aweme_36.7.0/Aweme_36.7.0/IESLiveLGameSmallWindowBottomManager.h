@class IESLiveLGameAudienceApi, NSTimer, IESLiveLGameSmallWindowBottomView, IESLiveLGameSmallWindowBottomManagerConfig;
@protocol IESLiveLGameSmallWindowManagerDelegate;

@interface IESLiveLGameSmallWindowBottomManager : NSObject

@property (nonatomic) long long prizeThreshold;
@property (retain, nonatomic) NSTimer *durationTimer;
@property (retain, nonatomic) IESLiveLGameSmallWindowBottomView *smallWindowBottomView;
@property (retain, nonatomic) IESLiveLGameSmallWindowBottomManagerConfig *config;
@property (retain, nonatomic) IESLiveLGameAudienceApi *networkApi;
@property (nonatomic) BOOL isDirty;
@property (weak, nonatomic) id<IESLiveLGameSmallWindowManagerDelegate> managerDelegate;

+ (BOOL)conditionHasFinished:(id)a0 condition:(id)a1;

- (void)resetManager;
- (id)getSmallWindowBottomView;
- (void)updateLottery:(id)a0;
- (BOOL)shouldCheckUserRight;
- (void)startSmallWindowBottomIfNeed:(id)a0 isColdBoot:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldRemoveManager;
- (long long)getTrackWindowStatus;
- (long long)getPrizeThresholdFromServer;
- (BOOL)lotteryIsEnd:(unsigned long long)a0;
- (void)changeSmallWindowBottomStatusTo:(unsigned long long)a0;
- (BOOL)locationIsFrontend:(id)a0;
- (long long)checkOtherConditionFinished:(id)a0;
- (void)reportStartTimingIfNeed:(BOOL)a0 location:(id)a1;
- (void)reportUserAction;
- (void)updateTimingTips:(long long)a0;
- (void)handleEventEnterLive;
- (void)handleEventAlreadyParticipate;
- (void)handleEventLotteryEnded;
- (void)handleWorkBeforeClose;
- (id)getSmallWindowTipsFromStatus:(unsigned long long)a0;
- (void)startTimingToRemoveBottomView;
- (void)startTimingToWaitingParticipateIM;
- (void)sendEvent:(long long)a0;
- (void).cxx_destruct;
- (void)resetTimer;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)startTiming;

@end
