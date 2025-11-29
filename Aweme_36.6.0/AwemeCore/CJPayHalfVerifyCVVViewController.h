@class CJPayButton, CJPayCVVInputView, UILabel, CJPayHalfVerifyCVVViewModel, CJPayStandardButton;
@protocol CJPayTrackerProtocol;

@interface CJPayHalfVerifyCVVViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayCVVInputView *inputBoxView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) CJPayHalfVerifyCVVViewModel *viewModel;
@property (retain, nonatomic) CJPayButton *tipsBtn;
@property (retain, nonatomic) CJPayStandardButton *confirmBtn;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) unsigned long long lastInputLength;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

- (void)event:(id)a0 params:(id)a1;
- (void)clickConfirm;
- (void)clickTips;
- (void)btmEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (void)updateErrorText:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)back;

@end
