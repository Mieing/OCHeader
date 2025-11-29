@class CJPayStandardAlertModel, CJPayStandardAlertView;

@interface CJPayStandardAlertViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) CJPayStandardAlertView *alertView;
@property (retain, nonatomic) CJPayStandardAlertModel *alertModel;
@property (nonatomic) unsigned long long buttonListStyle;
@property (nonatomic) unsigned long long positiveAlignment;

- (id)initWithAlertModel:(id)a0;
- (void)p_makeUI;
- (void)changeTitleIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_configBlock;
- (void)p_tapGestureRecognizerDismiss:(id)a0;
- (void)showAlertOnViewController:(id)a0;
- (void)showAlertOnViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)showAlert;

@end
