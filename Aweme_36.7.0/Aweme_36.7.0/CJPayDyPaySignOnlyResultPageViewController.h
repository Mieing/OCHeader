@class NSDictionary, UIImageView, CJPayButton, UILabel, CJPayAccountInsuranceTipView, CJPayDyPaySignConfirmResponse;

@interface CJPayDyPaySignOnlyResultPageViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) UIImageView *navIconImgView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayButton *button;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayDyPaySignConfirmResponse *response;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ clickBackBlock;

- (void)trackerWithName:(id)a0 params:(id)a1;
- (void)p_setupConstraints;
- (void)p_buttonClick;
- (id)p_getSignResult:(id)a0;
- (void)p_setupUI;
- (void)close;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (void)viewDidLoad;

@end
