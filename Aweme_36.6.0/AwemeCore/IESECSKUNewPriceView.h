@class UIColor, UILabel, UIView;

@interface IESECSKUNewPriceView : UIView

@property (retain, nonatomic) UIColor *atmosphereColor;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIView *crossLine;
@property (retain, nonatomic) UIView *specialView;

+ (void)setAttributePriceLabel:(id)a0 WithPrice:(id)a1 withType:(long long)a2;
+ (struct CGSize { double x0; double x1; })sizeWithPrice:(id)a0 withType:(long long)a1;
+ (BOOL)isBubblePrice:(long long)a0;

- (void)updateWithPrice:(id)a0 withType:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
