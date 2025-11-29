@class UITapGestureRecognizer, NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEIMDefaultLandingMsgTabPopupView : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *bckgrdImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *circleView;
@property (retain, nonatomic) UITapGestureRecognizer *tapBlankAreaToDismissGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapXToDismissGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)addGestures;
- (void)p_dismiss;
- (void)postBeforeDismiss;
- (void)gesturesToDismiss;
- (void)confirmButtonAction:(id)a0;
- (void)cancelButtonAction:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
