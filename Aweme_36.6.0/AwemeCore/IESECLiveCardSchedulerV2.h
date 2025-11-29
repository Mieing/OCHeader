@class IESECLiveCardGenerator, IESECLiveContext, NSString, IESECLiveCardViewModelV2, IESECGCDTimer, IESECLiveCardViewContainerV2;
@protocol IESECLiveCardViewDelegate, IESECLiveCardSchedulerBizActionDelegateV2;

@interface IESECLiveCardSchedulerV2 : IESECLiveTask <IESECLiveCardViewContainerBizDelegate>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLiveCardViewDelegate> cardViewDelegate;
@property (retain, nonatomic) IESECLiveCardViewContainerV2 *cardViewContainer;
@property (retain, nonatomic) IESECLiveCardGenerator *cardGenerator;
@property (retain, nonatomic) IESECGCDTimer *loopTimer;
@property (nonatomic) long long showCount;
@property (retain, nonatomic) IESECLiveCardViewModelV2 *cardViewModel;
@property (weak, nonatomic) id<IESECLiveCardSchedulerBizActionDelegateV2> bizActionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0 cardViewDelegate:(id)a1 cardViewContainer:(id)a2 cardViewModel:(id)a3;
- (void)configContextWithCardViewModel:(id)a0;
- (void)cancelLoopTimerIfNeeded;
- (void)startLoopStrategyIfNeededWith:(id)a0 showCardAction:(id /* block */)a1;
- (void)executeBizActionOnTaskStart;
- (void)executeActionWithName:(id)a0 params:(id)a1;
- (void)executeGetPopCardWithParams:(id)a0;
- (BOOL)checkValidWithCardView:(id)a0;
- (BOOL)isRunningStrategy;
- (void)executeBizActionOnTaskEnd;
- (void)cardViewContainer:(id)a0 didCloseCardView:(id)a1;
- (BOOL)isPreemptive;
- (BOOL)checkLoopStrategyIfNeededWith:(id)a0;
- (id)tracker;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isDuplicate:(id)a0;
- (void)dealloc;
- (void)cancel;

@end
