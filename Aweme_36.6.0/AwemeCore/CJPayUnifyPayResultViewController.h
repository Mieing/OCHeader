@class CJPayBaseResponse, CJPayAccountInsuranceTipView;

@interface CJPayUnifyPayResultViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayBaseResponse *response;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ btmTrackerBlock;

- (void)p_setNavTitle;
- (void)p_showResult;
- (void)stateButtonClick:(id)a0;
- (void)closeActionAfterTime:(int)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)containerHeight;
- (void)back;

@end
