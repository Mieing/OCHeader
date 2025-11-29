@class NSString, AWEPaySKMCreateCodeModel, AWEPaySKMAmountInputContainer, UILabel, AWEPayInputAlert, UIButton;

@interface AWEPaySKMSetAmountViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) AWEPaySKMAmountInputContainer *inputContainer;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *addRemarkBtn;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *userIconUrl;
@property (retain, nonatomic) AWEPaySKMCreateCodeModel *codeModel;
@property (retain, nonatomic) AWEPayInputAlert *inputAlert;
@property (nonatomic) BOOL amountInputReported;
@property (nonatomic) BOOL limitTipDidShow;

- (void)setupNavigation;
- (id)getAmountStr;
- (void)needRiskCheck:(id)a0;
- (void)addRemarkDidClick:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadData;
- (void)setupUI;

@end
