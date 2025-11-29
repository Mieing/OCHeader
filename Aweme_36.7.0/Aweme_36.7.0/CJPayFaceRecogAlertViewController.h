@class CJPayFaceRecogAlertContentView, NSString, CJPayButton, CJPayStandardButton, CJPayFaceRecognitionModel;

@interface CJPayFaceRecogAlertViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;
@property (retain, nonatomic) CJPayButton *bottomButton;
@property (retain, nonatomic) CJPayFaceRecogAlertContentView *contentView;
@property (retain, nonatomic) CJPayFaceRecognitionModel *model;
@property (copy, nonatomic) NSString *agreementName;
@property (copy, nonatomic) NSString *agreementURL;
@property (copy, nonatomic) NSString *protocolCheckBox;
@property (copy, nonatomic) id /* block */ confirmBtnBlock;
@property (copy, nonatomic) id /* block */ closeBtnBlock;
@property (copy, nonatomic) id /* block */ bottomBtnBlock;

- (void)showLoading:(BOOL)a0;
- (void)showOnTopVC:(id)a0;
- (void)p_onConfirmPayAction;
- (void)p_dismissSelfIfNeeded:(id /* block */)a0;
- (void)p_signFaceRecognition;
- (void)p_bottomButtonTapped;
- (id)initWithFaceRecognitionModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)closeButtonTapped;

@end
