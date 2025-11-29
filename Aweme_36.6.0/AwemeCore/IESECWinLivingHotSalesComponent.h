@class UIImageView, UILabel;

@interface IESECWinLivingHotSalesComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) UIImageView *fireIconView;
@property (retain, nonatomic) UILabel *hotSalesLabel;

+ (id /* block */)hotSalesWithHotSalesWidth:(double)a0;
+ (id /* block */)hotSales;
+ (double)hotSalesWidthWithModel:(id)a0;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
