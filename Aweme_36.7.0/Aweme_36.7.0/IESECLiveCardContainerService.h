@class UIView, IESECLiveContext, NSTimer, NSString, NSDate, NSMutableArray, IESECLiveBaseCardView;
@protocol IESECLiveCardContainerDelegate, IESECLiveCardModuleDelegate;

@interface IESECLiveCardContainerService : NSObject <IESECLiveCardContainerService>

@property (retain, nonatomic) NSDate *currentCardShowDate;
@property (retain, nonatomic) NSTimer *cardShowDelayTimer;
@property (retain, nonatomic) NSTimer *cardShowDurationTimer;
@property (retain, nonatomic) NSMutableArray *followCardViewQueue;
@property (retain, nonatomic) IESECLiveBaseCardView *forceShowCardView;
@property (nonatomic) BOOL enableShowForceCard;
@property (retain, nonatomic) IESECLiveBaseCardView *currentCardView;
@property (retain, nonatomic) UIView *wrapper;
@property (nonatomic) BOOL autoDismissPopCard;
@property (weak, nonatomic) id<IESECLiveCardContainerDelegate> containerDelegate;
@property (weak, nonatomic) id<IESECLiveCardModuleDelegate> cardModuleDelegate;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleOrientationIfNeeded;
- (BOOL)p_delegateWhetherCanShow;
- (id)p_wrapperView;
- (void)p_delegateShowContainerWithCardView:(id)a0;
- (void)cancelShowDelayTimer;
- (BOOL)card2:(id)a0 willShowBySwitch:(BOOL)a1 onEnterRoom:(BOOL)a2;
- (void)card:(id)a0 willShowBySwitch:(BOOL)a1 onEnterRoom:(BOOL)a2;
- (void)showCardView:(id)a0 onEnter:(BOOL)a1;
- (void)setupAutoDismissTimerWithDuration:(double)a0;
- (void)p_showFollowUpCardIfNeeded;
- (void)setupDelayShowTimerWithDelay:(double)a0 completion:(id /* block */)a1;
- (void)cancelShowDurationTimer;
- (BOOL)p_dequeueCardExist;
- (void)playLiveCardCloseAnimation;
- (void)p_delegateDidCloseCard:(id)a0;
- (BOOL)popCardFromQueueIfNeeded;
- (void)p_delegateRemoveCardFromContainer;
- (void)cleanCardView;
- (void)card:(id)a0 didDismissBySwitch:(BOOL)a1;
- (void)clearCardQueue;
- (BOOL)p_showNewCard:(id)a0 isFollowUp:(BOOL)a1 onEnter:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)shouldUpdateCard:(id)a0 withNewCard:(id)a1;
- (void)p_switchWithNewCard:(id)a0 oldCard:(id)a1 onEnter:(BOOL)a2 completion:(id /* block */)a3;
- (void)stashCardView:(id)a0;
- (void)p_closeCard:(id)a0 reason:(long long)a1 status:(long long)a2 completion:(id /* block */)a3;
- (id)p_queueCardTop;
- (void)autoDismissCardView;
- (BOOL)p_switchToCard:(id)a0 fromOldCard:(id)a1 onEnter:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_dropCardsWithID:(id)a0;
- (void)showCardView:(id)a0 onEnter:(BOOL)a1 completion:(id /* block */)a2;
- (void)closeCardWithID:(id)a0 withReason:(long long)a1;
- (void)closeCurrentCardWithReason:(long long)a0;
- (void)stopAutoDismissPopCard;
- (void)startAutoDismissPopCardWithDuration:(id)a0;
- (void)predictGoodsCardDurationWithAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
