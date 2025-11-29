@class UIImageView;

@interface MMAssetPickerSliderThumbView : MMUIView

@property (retain, nonatomic) UIImageView *arrow;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;
@property (nonatomic) BOOL isActive;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
