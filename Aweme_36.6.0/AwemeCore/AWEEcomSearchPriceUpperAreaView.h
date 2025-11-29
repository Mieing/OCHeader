@class UILabel, AWESearchMerchandiseModel;

@interface AWEEcomSearchPriceUpperAreaView : UIView

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) AWESearchMerchandiseModel *merchandise;

+ (BOOL)hasPriceUpperArea:(id)a0;
+ (double)priceUpperAreaHeight;

- (void)configWithMerchandise:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
