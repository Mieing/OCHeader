@class UIColor, IESECSKUPOIViewModel;

@interface IESECSKUNewInstallmentViewModel : IESECSKUInstallmentViewModel

@property (retain, nonatomic) IESECSKUPOIViewModel *poiViewModel;
@property (readonly, nonatomic) UIColor *atmosphereColor;

- (BOOL)showDouInstallment;
- (id)tradeItems;
- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (BOOL)showPOIInfo;
- (BOOL)showTradeIn;
- (id)tradeInTitle;
- (void)trackTradeInShow;
- (void)trackTradeInClick:(id)a0;
- (void).cxx_destruct;

@end
