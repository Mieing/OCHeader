@class UILabel, UIView;

@interface AWEECOMIMDynamicCardBodyPriceView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIView *lineView;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)widthWithElementModel:(id)a0;
+ (double)heightWihtElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (id)priceAttributedTextWithModel:(id)a0;
+ (double)priceViewWidthWithModel:(id)a0;
+ (double)getSmallFontSize:(double)a0;
+ (struct CGSize { double x0; double x1; })textSizeWithWithModel:(id)a0;
+ (id)priceTextWithModel:(id)a0;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)updatePriceViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
