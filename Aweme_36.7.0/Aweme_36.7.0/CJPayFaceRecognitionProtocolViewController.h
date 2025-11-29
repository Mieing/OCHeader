@class CJPayFaceRecognitionProtocolView, CJPayStyleButton, UIImageView, CJPayAccountInsuranceTipView, UILabel, CJPayFaceRecognitionModel;
@protocol CJPayTrackerProtocol;

@interface CJPayFaceRecognitionProtocolViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) UIImageView *faceImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayFaceRecognitionProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *nextStepButton;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayFaceRecognitionModel *model;
@property (copy, nonatomic) id /* block */ signSuccessBlock;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (nonatomic) BOOL shouldCloseCallBack;

- (void)p_makeConstraints;
- (void)nextButtonClick;
- (id)initWithFaceRecognitionModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)back;

@end
