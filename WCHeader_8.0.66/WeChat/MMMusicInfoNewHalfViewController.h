@class UIPanGestureRecognizer, MMUIButton, MMMusicOpenThirdAppHelper, UITapGestureRecognizer, UIButton, UIView, MMMusicHorizontalScrollingView, NSString, MMUILabel, MMUIActivityIndicatorView, MVWebViewController, MMMusicInfo, UIImageView;
@protocol MMMusicInfoNewHalfViewControllerDelegate;

@interface MMMusicInfoNewHalfViewController : MMUIViewController <WKUIDelegate, WKNavigationDelegate, UIScrollViewDelegate, MusicLinkServiceExtension, MMMusicOpenThirdAppHelperDelegate> {
    MMMusicInfo *_musicInfo;
    UIView *_containerView;
    UIView *_albumContainerView;
    MMUILabel *_songNameView;
    MMUILabel *_songDescLabel;
    BOOL _bFirstLayoutFinish;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIImageView *defaultIconView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMMusicHorizontalScrollingView *singerScrollingView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) BOOL isPanningHorizontal;
@property (nonatomic) struct CGPoint { double x; double y; } panStartPos;
@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) unsigned long long webViewGetA8KeyStatus;
@property (nonatomic) unsigned long long webViewPageStatus;
@property (retain, nonatomic) MVWebViewController *webViewController;
@property (nonatomic) BOOL hasGetA8Key;
@property (nonatomic) long long currOrientation;
@property (retain, nonatomic) MMUIButton *openMembershipButton;
@property (retain, nonatomic) MMUILabel *openMembershipHintLabel;
@property (nonatomic) double menbershipButtonAndLabelSpacing;
@property (retain, nonatomic) MMMusicOpenThirdAppHelper *thirdPartyAppHelper;
@property (weak, nonatomic) id<MMMusicInfoNewHalfViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ blockOnClose;
@property (copy, nonatomic) id /* block */ onClickJump;
@property (copy, nonatomic) id /* block */ onJoinMembershipHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMusicInfo:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)reloadDisplay;
- (id)getMusicOperationUrl;
- (void)configurateWebview;
- (BOOL)disableOperationWebview;
- (void)showWebview;
- (void)configurateAndShowJumpButton;
- (id)generateWebViewControllerFromURL:(id)a0;
- (id)resizeImage:(id)a0 toMaxWidth:(int)a1 andMaxHeight:(int)a2;
- (id)containerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewNormalFrame;
- (BOOL)showOpenMemberShipLabel;
- (void)onOpenMembershipButtonClicked;
- (void)customLayout;
- (void)layoutOpenMembershipButton;
- (void)closeAnimated:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)onClose;
- (void)handleTapGesture:(id)a0;
- (void)handlePanGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)onJumpButtonClicked;
- (void)showWebviewOrJumpButton;
- (void)handleFailOnGetA8Key;
- (void)handleReceiveNavigationResponse:(BOOL)a0;
- (void)handleGetA8KeyFinish:(id)a0 reason:(int)a1;
- (void)handleWebviewScrollViewScroll:(id)a0;
- (void)musicLinkService:(id)a0 didGetLinkWithResults:(id)a1;
- (void)mmMusicOpenThirdAppHelper:(id)a0 onOpen3rdMusicAppWithType:(unsigned long long)a1 source:(unsigned long long)a2;
- (void).cxx_destruct;

@end
