@class UIView, CAShapeLayer;

@interface AWEMerchandiseComponentCellDropDown : AWEMerchandiseComponentBaseCell

@property (retain, nonatomic) CAShapeLayer *shapeViewLayer;
@property (retain, nonatomic) CAShapeLayer *shapeViewBorderLayer;
@property (nonatomic) double bottomMargin;
@property (retain, nonatomic) UIView *shapeView;
@property (retain, nonatomic) UIView *shapeBackView;
@property (nonatomic) struct { double topLeft; double topRight; double bottomRight; double bottomLeft; } dropDownCornerRadius;

+ (double)titleWidthWithModel:(id)a0 filterManager:(id)a1;
+ (BOOL)isSelectWithModel:(id)a0 filterManager:(id)a1;
+ (void)configDisplayTextWithModel:(id)a0 filterManager:(id)a1;
+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)addShapLayerWithAllCorner;
- (void)addShapLayer;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
