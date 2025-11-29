@class CJPayFaceRecognitionLeadPageModel, CJPayLoadingButton, UILabel, CJPayCommonProtocolView;

@interface CJPayFaceRecognitionHalfView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayLoadingButton *confirmBtn;
@property (retain, nonatomic) CJPayFaceRecognitionLeadPageModel *model;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (copy, nonatomic) id /* block */ checkProtocolBlock;
@property (copy, nonatomic) id /* block */ clickConfirmBtn;

- (void)p_onConfirmAction;
- (void)confirmBtnLoading:(BOOL)a0;
- (void)changeProtocolCheckBoxStatus:(BOOL)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
