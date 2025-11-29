@class AWEAdLynxCardView, NSArray, NSString, AWEAdLynxCardViewModel, AWEAwemeModel, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWECommerceComponentContext;

@interface AWEAdLynxCardManager : NSObject <AWECommerceComponentProtocol, AWEAdLynxCardManager>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;
@property (retain, nonatomic) AWEAdLynxCardViewModel *viewModel;
@property (retain, nonatomic) AWEAdLynxCardView *adLynxCardView;
@property (copy, nonatomic) id /* block */ gurdShowHandler;
@property (copy, nonatomic) id /* block */ nativeButtonFlashHandler;
@property (copy, nonatomic) id /* block */ adPromptviewShow;
@property (copy, nonatomic) id /* block */ adPromptviewHide;
@property (nonatomic) double updatedBottomOffset;
@property (nonatomic) BOOL tryShowTraced;
@property (nonatomic) BOOL promptViewIsShowing;
@property (nonatomic) double leftBottomOffset;
@property (retain, nonatomic) NSArray *leftElements;
@property (nonatomic) BOOL hasReset;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long playerStatus;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (BOOL)shouldShowInteractiveAICard:(id)a0;
+ (id)adLynxCardComponentWithModel:(id)a0;
+ (void)loadLynxResourceIfNeeded:(id)a0;
+ (void)traceAdLynxCardAdTraceSelected:(id)a0;
+ (void)traceAdLynxCardAdTraceTryShow:(id)a0;
+ (void)traceAdLynxCardShowResult:(id)a0 status:(long long)a1;
+ (BOOL)blockButtonShow:(id)a0;
+ (BOOL)shouldShowAdLynxCard:(id)a0;
+ (void)traceAdLynxCardDataReceived:(id)a0 withAwemeType:(long long)a1;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)setHide:(BOOL)a0;
- (void)richAwemeUpdateFromIndex:(long long)a0 toIndex:(long long)a1 isByHand:(BOOL)a2 isFullPage:(BOOL)a3;
- (void)detectAbnormalDisplay;
- (void)setupCardWithInteractionViewController:(id)a0 model:(id)a1;
- (BOOL)adLynxCardShowing;
- (void)richAwemeUpdateFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (void)onPromptViewShow;
- (void)onPromptViewClose;
- (void)setupCard;
- (void)loadAdLynxView;
- (double)leftAndRightContainerBottomOffset;
- (void)onAdLynxCardStatusChange:(long long)a0;
- (void)addLynxCardView;
- (void)processLynxCardFallbackedIfNeeded;
- (void)showButtonPhaseAnimation;
- (void)showCardPhaseAnimation;
- (void)leaveCardPhaseAnimation;
- (void)fallbackToNativeButton;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)viewDidLayoutSubviews;
- (void)startAnimation:(BOOL)a0;
- (void)viewWillAppear;
- (void)reset;
- (void)resume;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
