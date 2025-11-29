@class NSTimer, UIView, IESECLiveSliceManager, NSDate, NSString, IESECLiveBaseCardView, IESECLiveCardGenerator, IESECQualityInfoV2, IESECLiveContext;
@protocol IESECLiveCardViewDelegate, IESECLiveCardContainerDelegate, IESECLiveCardViewContainerBizDelegate;

@interface IESECLiveCardViewContainerV2 : NSObject <IESECLiveCardContainerServiceV2>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveSliceManager *sliceManager;
@property (retain, nonatomic) IESECLiveCardGenerator *cardGenerator;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSTimer *cardShowDelayTimer;
@property (retain, nonatomic) NSTimer *cardShowDurationTimer;
@property (retain, nonatomic) NSDate *currentCardShowDate;
@property (retain, nonatomic) IESECLiveBaseCardView *forceShowCardView;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (weak, nonatomic) id<IESECLiveCardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<IESECLiveCardContainerDelegate> containerDelegate;
@property (weak, nonatomic) id<IESECLiveCardViewContainerBizDelegate> bizDelegate;
@property (retain, nonatomic) IESECLiveBaseCardView *currentCardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0;
- (void)handleOrientationIfNeeded;
- (void)cancelShowDelayTimer;
- (void)setupAutoDismissTimerWithDuration:(double)a0;
- (void)setupDelayShowTimerWithDelay:(double)a0 completion:(id /* block */)a1;
- (void)cancelShowDurationTimer;
- (void)playLiveCardCloseAnimation;
- (void)card:(id)a0 didDismissBySwitch:(BOOL)a1;
- (BOOL)shouldUpdateCard:(id)a0 withNewCard:(id)a1;
- (void)autoDismissCardView;
- (void)showCardWithCardViewModel:(id)a0;
- (void)closeCardViewWithPromotionID:(id)a0;
- (void)trackEnterRoomCardDuration:(id)a0 scene:(long long)a1 cardViewType:(long long)a2;
- (id)cardShowTrackFromScene:(long long)a0;
- (void)qualityInfoInit:(id)a0;
- (void)enterRoomTrackCardWithParams:(id)a0 promotionID:(id)a1 showScene:(long long)a2;
- (void)normalStatusTrackCardWithPromotionID:(id)a0 showScene:(long long)a1;
- (void)switchToNewCard:(id)a0 fromOldCard:(id)a1;
- (void)showCardView:(id)a0;
- (void)closeCard:(id)a0 status:(long long)a1 isAnimation:(BOOL)a2 completion:(id /* block */)a3;
- (void)showNewCard:(id)a0 isFollowUp:(BOOL)a1 isAnimation:(BOOL)a2 completion:(id /* block */)a3;
- (void)card:(id)a0 willShowBySwitch:(BOOL)a1;
- (void)containerAddCardView:(id)a0;
- (void)trackPerformanceEventWithCardViewModel:(id)a0;
- (void)delegateDidCloseCard:(id)a0;
- (void)cleanCurrentCardView;
- (void)delegateRemoveCardFromContainer;
- (BOOL)delegateWhetherCanShow;
- (void)delegateShowContainerWithCardView:(id)a0;
- (id)qualityEventName:(long long)a0;
- (id)initWithLiveContext:(id)a0 containerDelegate:(id)a1 bizDelegate:(id)a2;
- (void)closeCardView:(id)a0;
- (id)tracker;
- (void).cxx_destruct;
- (void)dealloc;
- (id)roomContext;

@end
