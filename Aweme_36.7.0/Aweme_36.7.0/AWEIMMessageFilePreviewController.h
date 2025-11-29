@class UILabel, UIView, NSString, UIImageView, AWEIMUserActionSheetView, UIButton, UIActivityViewController, UIProgressView, AWEIMMessageFilePreviewViewModel;
@protocol AnnieXContainerBaseProtocol;

@interface AWEIMMessageFilePreviewController : UIViewController <IESWebViewCommonDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *fileNameLabel;
@property (retain, nonatomic) UILabel *fileSizeLabel;
@property (retain, nonatomic) UILabel *errTipLabel;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) UIButton *downloadBtn;
@property (retain, nonatomic) UIButton *openActivityBtn;
@property (retain, nonatomic) UIButton *rightNavButton;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *previewView;
@property (retain, nonatomic) AWEIMMessageFilePreviewViewModel *viewModel;
@property (weak, nonatomic) AWEIMUserActionSheetView *moreActionAlert;
@property (weak, nonatomic) UIActivityViewController *openExternalVC;
@property (nonatomic) BOOL isVCAppearing;
@property (nonatomic) BOOL needRecoverWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)backBtnClicked;
- (void)clickDownloadBtn;
- (void)p_bindVM;
- (void)clickOpenFileBtn;
- (void)rightBtnClick;
- (void)p_addViewConstraints;
- (void)p_configFileLabelAndIcon;
- (void)p_handleMessageRecalled;
- (void)p_showPreviewView;
- (void)p_hiddenPreviewViewIfNeeded;
- (void)p_configFileDesc;
- (void)p_configProgressStatus;
- (void)p_configErrTipLabel;
- (void)p_resolveButtonState;
- (void)p_configButtonState:(unsigned long long)a0;
- (BOOL)p_showPopAlertIfNeeded;
- (void)p_openActivityViewController;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)setupUI;
- (BOOL)canShowMoreButton;

@end
