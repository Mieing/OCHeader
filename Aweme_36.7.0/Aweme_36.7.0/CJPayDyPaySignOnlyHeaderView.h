@class CJPayDyPaySignOnlyModel, UIImageView, CJPayDynamicLayoutView, UIView, UILabel, CJPayButton;

@interface CJPayDyPaySignOnlyHeaderView : UIView

@property (retain, nonatomic) CJPayDynamicLayoutView *stackView;
@property (retain, nonatomic) UIView *logoImageBgView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIView *titleBgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayButton *tipsButton;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *riskFundDetailBgView;
@property (retain, nonatomic) UIView *riskFundDetailView;
@property (retain, nonatomic) UILabel *riskFundAmountSymbolLabel;
@property (retain, nonatomic) UILabel *riskFundAmountLabel;
@property (retain, nonatomic) UILabel *riskFundDescLabel;
@property (retain, nonatomic) CJPayDyPaySignOnlyModel *model;

- (void)p_clickTipsIcon;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
