@class UIButton, NSString, UILabel, UIView, AFDRemarkNameAlertContext;

@interface AFDRemarkNameAlertController : AFDTextInputAlertController <UITextFieldDelegate>

@property (retain, nonatomic) AFDRemarkNameAlertContext *context;
@property (retain, nonatomic) UIView *remarkMsgContainerView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *remarkMsgLabel;
@property (retain, nonatomic) UIButton *fillRemarkNameButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEditRemarkWithAction:(id)a0 actionStatus:(id)a1 addressFill:(BOOL)a2;
- (void)trackEditRemarkWithAction:(id)a0 actionStatus:(id)a1;
- (BOOL)p_canShowSubTitle;
- (id)p_prepareFillMsg;
- (id)p_subString:(id)a0 maxLength:(unsigned long long)a1;
- (void)p_setRemarkMsgContainerHidden;
- (void)p_fillRemarkNameButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
