@class NSString, IESLiveChargeViewModel, UIImageView, UILabel, UIView;

@interface IESLiveChargeViewTitleComponent : UIView <IESLiveChargeViewComponent>

@property (nonatomic) double width;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *chargeFAQ;
@property (retain, nonatomic) UIImageView *chargeFAQImageView;
@property (retain, nonatomic) UILabel *chargeFAQLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)didBalanceUpdated;
- (void)didRechargeSuccess:(BOOL)a0 error:(id)a1;
- (void)didChargePanelFAQTaped:(id)a0;
- (void)updateFAQStatus;
- (void)handleNormalFAQStatus;
- (void)handleFirstChargeGuideFAQStatus;
- (void)handleChargeFailFAQStatus;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithWidth:(double)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (double)viewHeight;

@end
