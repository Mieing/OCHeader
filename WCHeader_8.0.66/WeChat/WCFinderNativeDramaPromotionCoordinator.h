@class UIPanGestureRecognizer, MMTimer, _TtC6WeChat30FinderNativeDramaFeedTipsToast, UIView, WCFinderNativeDramaFeedViewModel, WCFinderFeedListView;

@interface WCFinderNativeDramaPromotionCoordinator : NSObject

@property (retain, nonatomic) WCFinderNativeDramaFeedViewModel *viewModel;
@property (weak, nonatomic) WCFinderFeedListView *feedListView;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIPanGestureRecognizer *tipsPanGesture;
@property (retain, nonatomic) MMTimer *promotionTimer;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) _TtC6WeChat30FinderNativeDramaFeedTipsToast *toast;
@property (weak, nonatomic) UIView *toastHostView;
@property (nonatomic) BOOL feedInteractionDisabled;

- (id)initWithViewModel:(id)a0 feedListView:(id)a1 containerView:(id)a2 tipsPanGesture:(id)a3;
- (void)dealloc;
- (void)handleViewDidAppear;
- (void)viewWillDisappear;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)handleMediaStartPlay;
- (void)handleMediaPauseShouldPauseSound:(BOOL)a0;
- (void)willDisplayContentVM:(id)a0 hostView:(id)a1 safeTopInset:(double)a2;
- (void)didEndDisplayingHostView:(id)a0;
- (void)updateFeedInteractionIfNeeded;
- (void)handleDenialGesture:(id)a0;
- (void)handleToastTap;
- (void)_showDenialToast;
- (void)startCountDownIfNeeded;
- (void)promotionCountDownTimerTrigger;
- (void)stopTimer;
- (void)updatePromotionToast;
- (void)fetchPromotionWithContentVM:(id)a0;
- (void)fetchIndependentFeedPromotionWithContentVM:(id)a0;
- (void)fetchInternalFeedPromotionWithContentVM:(id)a0;
- (void)disableFeedInteraction;
- (void)enableFeedInteraction;
- (void)removeToastIfNeededFromHostView:(id)a0;
- (void).cxx_destruct;

@end
