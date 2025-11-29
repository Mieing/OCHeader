@class AWEEcommerceSearchCommonTagModel;

@interface AWEEcommerceSearchStyleLabel : UILabel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *tagModel;
@property (nonatomic) struct AWESearchCornerRadius { double leftTop; double leftBottom; double rightTop; double rightBottom; } differentCornerRadius;

+ (Class)layerClass;

- (id)bgGradientLayer;
- (void)configWithTextStruct:(id)a0;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
