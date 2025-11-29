@class AWEStudioGradientRealBorder, UIView;

@interface AWEStudioGradientBorderView : UIView

@property (readonly, nonatomic) AWEStudioGradientRealBorder *border;
@property (readonly, nonatomic) UIView *contentView;

- (void)resetBorderConfigBlock:(id /* block */)a0;
- (void)resetBorderLayerBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
