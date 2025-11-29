@class NSString, CJPayCommonExceptionView;

@interface CJPayExceptionViewController : CJPayThemeBaseViewController

@property (retain, nonatomic) CJPayCommonExceptionView *exceptionView;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL isClickActionButton;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) id /* block */ closeblock;

+ (void)gotoThrotterPageWithAppId:(id)a0 merchantId:(id)a1 fromVC:(id)a2 closeBlock:(id /* block */)a3 source:(id)a4;

- (void)p_track:(id)a0 params:(id)a1;
- (id)initWithMainTitle:(id)a0 subTitle:(id)a1 buttonTitle:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)back;

@end
