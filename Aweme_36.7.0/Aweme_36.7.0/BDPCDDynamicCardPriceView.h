@class UIColor, UIFont, BDPCDDynamicCardPriceDetail, UILabel;

@interface BDPCDDynamicCardPriceView : UIView

@property (retain, nonatomic) UIFont *bigFont;
@property (retain, nonatomic) UIFont *littleFont;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) BDPCDDynamicCardPriceDetail *priceDetailView1;
@property (retain, nonatomic) BDPCDDynamicCardPriceDetail *priceDetailView2;
@property (retain, nonatomic) UILabel *intervalLab;

+ (id)priceViewWithBigFont:(id)a0 littleFont:(id)a1 color:(id)a2;

- (void)refreshByMoneyStr:(id)a0;
- (void)refreshByPennyMoneyStr:(id)a0;
- (void)refrehByBigFont:(id)a0 littleFont:(id)a1 color:(id)a2;
- (void)refreshByMoneyStr:(id)a0 withStrikethrough:(BOOL)a1;
- (void)refreshByMoneyType:(id)a0 moneyStr:(id)a1;
- (void)refreshBySpace:(double)a0 marigin:(double)a1;
- (void)refreshBySpace:(double)a0 moneyTypeMarigin:(double)a1 subMoneyMarigin:(double)a2;
- (void)refreshByMoney:(id)a0;
- (void)refreshByMoneyType:(id)a0 Money:(id)a1 SubMoney:(id)a2;
- (void)setOtherPriceHiden;
- (void)setOtherPriceShow;
- (void)refreshByMaxMoney:(id)a0 andMinMoney:(id)a1;
- (void)refreshByStrMaxMoney:(id)a0 andStrMinMoney:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
