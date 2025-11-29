@class UILabel, CAGradientLayer, NSString;

@interface AWELivingTagView : UIView <AWELivingTag>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAGradientLayer *bgLayer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFont:(id)a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithText:(id)a0 font:(id)a1 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)updateStartColor:(id)a0 endColor:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })desBoundsWithLabel:(id)a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)colorLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateText:(id)a0;

@end
