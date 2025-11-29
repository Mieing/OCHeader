@class NSString, IESLiveChargeViewModel;

@interface IESLiveChargeViewAgreementComponent : IESLiveBaseChargeAgreementView <IESLiveChargeViewComponent>

@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)chargeAgreementViewOnTapped;
- (void)didAgreementStatusChanged;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)viewHeight;

@end
