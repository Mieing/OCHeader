@class UIScrollView, AWEMScrollViewDelegateDistribute, AWEMSearchAutoPlayCalculator;
@protocol AWEMSearchAutoPlayCard;

@interface AWEMSearchAutoPlayController : NSObject

@property (nonatomic) BOOL canActive;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) id<AWEMSearchAutoPlayCard> activeCard;
@property (weak, nonatomic) id<AWEMSearchAutoPlayCard> transitionFullScreenCard;
@property (nonatomic) BOOL shouldFixCardToDeactive;
@property (weak, nonatomic) id<AWEMSearchAutoPlayCard> focusCard;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) AWEMSearchAutoPlayCalculator *adapter;
@property (retain, nonatomic) AWEMScrollViewDelegateDistribute *distribute;

- (void)addNotifications;
- (void)forceBecomeActive:(id)a0;
- (void)didEndShowing;
- (void)handleWindowDidBecomeKeyNotification:(id)a0;
- (void)handleWindowDidResignKeyNotification:(id)a0;
- (id)initWithScrollView:(id)a0 adapter:(id)a1 needDistribute:(BOOL)a2;
- (void)enterFullScreenWithCard:(id)a0 withForceActive:(BOOL)a1;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillResignActive;
- (BOOL)p_cardCanBecomeActive:(id)a0;
- (BOOL)p_canActive;
- (void)p_updateCanActive:(BOOL)a0;
- (void)p_activeCard:(id)a0;
- (void)p_resignCurrentCard;
- (void)p_didEndShowingCard:(id)a0;
- (void)p_resumeCard;
- (void)p_pauseCard;
- (void)p_resignActiveCard:(id)a0;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;
- (void)dealloc;
- (void)removeNotifications;
- (void)markActive;

@end
