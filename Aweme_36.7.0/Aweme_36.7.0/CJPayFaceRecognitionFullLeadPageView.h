@class CJPayFaceRecognitionLeadPageModel, UIImageView, BDImageView, CJPayCommonProtocolView, CJPayLoadingButton, CJPayAccountInsuranceTipView, CJPayButton, UILabel;

@interface CJPayFaceRecognitionFullLeadPageView : UIView

@property (retain, nonatomic) CJPayFaceRecognitionLeadPageModel *model;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) BDImageView *centerImageView;
@property (retain, nonatomic) UILabel *countDownTipLabel;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayLoadingButton *confirmBtn;
@property (retain, nonatomic) CJPayButton *subButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *insuranceTipsView;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (copy, nonatomic) id /* block */ checkProtocolBlock;
@property (copy, nonatomic) id /* block */ clickConfirmBtn;
@property (copy, nonatomic) id /* block */ clickSubBtn;
@property (readonly, nonatomic) double realCenterYOffset;

- (void)p_setupConstraints;
- (void)p_onConfirmAction;
- (void)confirmBtnLoading:(BOOL)a0;
- (double)p_centerImageViewWidth;
- (void)p_onSubButtonAction;
- (void)showCountDownNumber:(long long)a0;
- (void)changeProtocolCheckBoxStatus:(BOOL)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
