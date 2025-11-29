@class CJPayFaceRecognitionLeadPageModel, UIViewController, UIImageView, CJPayAccountInsuranceTipView, CJPayFaceRecognitionHalfView;

@interface CJPayFaceRecognitionHalfViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayFaceRecognitionHalfView *halfContentView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *insuranceTipsView;
@property (retain, nonatomic) UIImageView *staticAvatarImageView;
@property (nonatomic) BOOL isUserCheckProtocol;
@property (nonatomic) BOOL isNeedRetain;
@property (retain, nonatomic) CJPayFaceRecognitionLeadPageModel *model;
@property (nonatomic) BOOL needShowProtocolPage;
@property (retain, nonatomic) UIViewController *faceVC;

- (void)trackerWithName:(id)a0 params:(id)a1;
- (void)p_closeWithCompletion:(id /* block */)a0;
- (void)p_clickConfirmBtn;
- (void)confirmBtnLoading:(BOOL)a0;
- (void)insertFaceVC:(id)a0;
- (void)p_checkProperties;
- (void)p_clickProtocolCheckBox:(BOOL)a0;
- (void)p_checkProtocol:(id)a0;
- (void)p_setupFaceVC;
- (void)p_setupUI;
- (void)close;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)faceDetected;
- (double)containerHeight;

@end
