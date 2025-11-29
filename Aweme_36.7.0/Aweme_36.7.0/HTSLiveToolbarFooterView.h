@class UIView;

@interface HTSLiveToolbarFooterView : UICollectionReusableView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *lineView;

- (void)updateCustomSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLineColor:(id)a0 alpha:(double)a1;
- (void)updateLinePaddingLeft:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
