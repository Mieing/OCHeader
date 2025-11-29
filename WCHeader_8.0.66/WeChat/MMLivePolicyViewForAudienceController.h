@class UIView, NSString, MMAcceptAgreementProtocolView, UIButton, UIImageView, MMWebViewController, NSURLRequest, MMUILabel, MMUIButton;
@protocol MMLivePolicyViewForAudienceControllerDelegate, YYWebViewInterface;

@interface MMLivePolicyViewForAudienceController : MMUIHalfScreenViewController <YYWebViewDelegate, MMAcceptAgreementProtocolViewDelegate, MMUIHalfScreenViewControllerDelegate>

@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) MMUILabel *headerTitle;
@property (retain, nonatomic) MMAcceptAgreementProtocolView *policyProtocolView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView<YYWebViewInterface> *webview;
@property (retain, nonatomic) UIImageView *shadowView;
@property (nonatomic) long long currOrientation;
@property (weak, nonatomic) MMWebViewController *webVC;
@property (weak, nonatomic) id<MMLivePolicyViewForAudienceControllerDelegate> policyDelegate;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillPush:(BOOL)a0;
- (void)setupUI;
- (void)layoutUI;
- (void)dealloc;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (void)popOrDismissSelf;
- (void)notifySelfPopedOrDismissed;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)onProtocolSelectedClicked;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2 isMainFrame:(BOOL)a3 navigationAction:(id)a4;
- (void).cxx_destruct;

@end
