@class AWEAwemeModel, NSString, UIView, AWEButton, NSError, AWEAdWebViewController, AWEOriginalAdModel, AWEAdModalWebViewController, AWEOriginalAdCardModel, UIViewController, AWEPageSheetPresentationNavigationController;
@protocol AWEPlayInteractionViewControllerProtocol, AWECommerceComponentContext;

@interface AWEAdWebViewModalManager : NSObject <UIScrollViewDelegate, AWECommerceComponentProtocol, AWEAdWebViewModalManager>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *preloadURL;
@property (nonatomic) BOOL isShowModalEventTrggered;
@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) AWEAdModalWebViewController *webViewController;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double originWidth;
@property (nonatomic) double originHeight;
@property (retain, nonatomic) AWEPageSheetPresentationNavigationController *pageSheetController;
@property (retain, nonatomic) AWEOriginalAdModel *smartPhoneOriginAdInfo;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSError *webFailError;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) id /* block */ appearingBlock;
@property (copy, nonatomic) id /* block */ disappearingBlock;
@property (nonatomic) BOOL isModalShowing;
@property (retain, nonatomic) AWEAdWebViewController *cardWebViewController;
@property (retain, nonatomic) AWEOriginalAdCardModel *cardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)triggerShowModalEvent;
- (void)preloadWebViewIfNeededWithWebURL:(id)a0 fromView:(id)a1;
- (void)preloadWebViewFromView:(id)a0;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)setModel:(id)a0 modalWebURL:(id)a1;
- (void)setModel:(id)a0 cardStatusCode:(unsigned long long)a1;
- (void)showModalWithNotification:(id)a0;
- (void)makeSmartPhoneCallFromWebviewEvent:(id)a0;
- (void)showModalWithAnimationAndAttachNotification:(id)a0;
- (void)handleModalSetFrameNoti:(id)a0;
- (void)handleModalSetSizeNotification:(id)a0;
- (void)dismissModalWithoutAnimation:(id)a0;
- (void)handleLoadStatusNotification:(id)a0;
- (void)addModalToView:(id)a0;
- (void)resetWebViewFrame;
- (void)showModalWithURL:(id)a0;
- (void)addModalToTopViewIfNeeded;
- (void)animateInWebViewController;
- (void)dismissModalAnimated:(BOOL)a0;
- (void)closeModalAction;
- (void)showModal;
- (id)initWithModel:(id)a0 modalURL:(id)a1;
- (id)initWithModel:(id)a0 cardStatusCode:(unsigned long long)a1;
- (void)prepareForDisplay;
- (id)initWithModel:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)dismissAction;
- (void)setupUI;
- (void)addObservers;

@end
