@class IESECLiveCardViewContainerV2, IESECLiveContext, IESECLiveCardViewModelV2, IESECLiveTaskQueue, IESECLiveCardSchedulerV2;
@protocol IESECLiveCardViewDelegate, IESECLiveCardContainerDelegate, IESECLiveCardSchedulerBizActionDelegateV2;

@interface IESECLiveCardContainerServiceV2 : NSObject

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLiveCardContainerDelegate> containerDelegate;
@property (weak, nonatomic) id<IESECLiveCardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<IESECLiveCardSchedulerBizActionDelegateV2> cardModuleDelegate;
@property (retain, nonatomic) IESECLiveCardSchedulerV2 *curCardScheduler;
@property (retain, nonatomic) IESECLiveTaskQueue *taskQueue;
@property (retain, nonatomic) IESECLiveCardViewContainerV2 *cardViewContainer;
@property (retain, nonatomic) IESECLiveCardViewModelV2 *currentCardViewModel;

- (void)handleOrientationIfNeeded;
- (id)initWithLiveContext:(id)a0 cardContainerDelegate:(id)a1 cardViewDelegate:(id)a2 cardModuleDelegate:(id)a3;
- (void)showWithCardViewModel:(id)a0;
- (void)closeAllCard;
- (void)closeCurrentCard;
- (void)closeCardWithPromotionID:(id)a0;
- (void).cxx_destruct;

@end
