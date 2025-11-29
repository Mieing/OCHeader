@class NSString, IESLiveChargeViewModel, UIImageView, UILabel, UIView;

@interface IESLiveChargeViewBalanceComponent : UIView <IESLiveChargeViewComponent>

@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (retain, nonatomic) UILabel *balanceLabel;
@property (retain, nonatomic) UIView *chargeFAQ;
@property (retain, nonatomic) UIImageView *chargeFAQImageView;
@property (retain, nonatomic) UILabel *chargeFAQLabel;
@property (nonatomic) BOOL isChargeFail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)didBalanceUpdated;
- (void)didRechargeSuccess:(BOOL)a0 error:(id)a1;
- (void)updateBalance;
- (void)addFaqView;
- (void)didChargePanelFAQTaped:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)viewHeight;

@end
