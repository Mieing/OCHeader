@class UIImageView, UIView;

@interface MMPageSheetProgressiveDragView : UIView

@property (retain, nonatomic) UIView *barView;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onPageSheetDragToDismissOffset:(double)a0 animated:(BOOL)a1;
- (void)updateBarColor:(id)a0;
- (void)updateArrowColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
