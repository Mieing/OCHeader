@class IESECSKUNewPriceView;

@interface IESECSKUTopPriceContainer : UIView

@property (retain, nonatomic) IESECSKUNewPriceView *mainPrice;
@property (retain, nonatomic) IESECSKUNewPriceView *subPrice;

+ (id)priceSizesAndDiscountTypeFromViewModel:(id)a0;
+ (struct CGSize { double x0; double x1; })priceSizeFromSizeParams:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 MaxWidth:(double)a1;

- (void)updateWithViewModel:(id)a0 MaxWidth:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
