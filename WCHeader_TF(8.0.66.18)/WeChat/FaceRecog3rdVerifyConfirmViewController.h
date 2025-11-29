@class UIView, MMWebImageView, FaceRecog3rdVerifyConfirmLogic, WCAgreementCheckBox, NSString, UIButton, FaceRecogResultView, CAGradientLayer, MMUILabel, UIScrollView;
@protocol FaceRecog3rdVerifyConfirmViewControllerDelegate;

@interface FaceRecog3rdVerifyConfirmViewController : MMUIViewController

@property (retain, nonatomic) UIScrollView *scrollContentView;
@property (retain, nonatomic) UIView *detailView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) WCAgreementCheckBox *overseaAgreementCheckView;
@property (retain, nonatomic) WCAgreementCheckBox *agreementCheckView;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *sloganLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIButton *confirmInvokeBtn;
@property (retain, nonatomic) FaceRecogResultView *failResultView;
@property (retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL agreementSelected;
@property (nonatomic) BOOL overseaAgreementSelected;
@property (weak, nonatomic) id<FaceRecog3rdVerifyConfirmViewControllerDelegate> delegate;

- (id)initWithAppId:(id)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (id)genAgreementCheckBox;
- (void)initLayout;
- (void)viewDidLayoutSubviews;
- (id)faceRecogVerifyGetFeedbackUrl;
- (void)onFeedback;
- (void)onStartFaceReco;
- (void)onCancel;
- (void)onConfirmFail;
- (void)updateView:(id)a0;
- (void)updateViewWithFailReason:(id)a0 desc:(id)a1 confirmLogic:(id)a2;
- (void)updateConfirmButton;
- (void).cxx_destruct;

@end
