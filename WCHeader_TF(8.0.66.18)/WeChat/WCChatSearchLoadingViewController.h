@class UIScreenEdgePanGestureRecognizer, WCImageSearchLogic, NSString, WCStoryDismissInteractiveTransition, UIImageView, UIButton, WAAppDismissAnimateTransition, UILabel;

@interface WCChatSearchLoadingViewController : MMUIViewController <WCImageSearchEventDelegate, UIViewControllerTransitioningDelegate, WCStoryDismissInteractiveTransitionDelegate>

@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *tapButton;
@property (retain, nonatomic) UIButton *whiteTapButton;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) WCImageSearchLogic *searchLogic;
@property (retain, nonatomic) WCStoryDismissInteractiveTransition *dismissInteractiveTransition;
@property (retain, nonatomic) WAAppDismissAnimateTransition *dismissAnimateTransition;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPopBackInteractivePopGesture;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)onDismissInteractiveTransitionBegin:(id)a0;
- (id)initWithSearchEntity:(id)a0;
- (void)viewDidLoad;
- (void)addLoadingAnimation;
- (void)setNavigationBar;
- (void)initView;
- (void)onTapNavBackButton;
- (void)onTapButton;
- (void)changeStatusTo:(unsigned long long)a0;
- (void)internalSetStatus:(unsigned long long)a0;
- (double)referenceHeight;
- (void)internalSetLoadingTip:(unsigned long long)a0;
- (void)onNetworkError;
- (void)onImageExpired;
- (void)onGetNoResult;
- (id)getViewController;
- (void).cxx_destruct;

@end
