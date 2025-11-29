@class UIImageView;

@interface BDXCategoryIndicatorImageView : BDXCategoryIndicatorComponentView

@property (readonly, nonatomic) UIImageView *indicatorImageView;
@property (nonatomic) BOOL indicatorImageViewRollEnabled;
@property (nonatomic) struct CGSize { double width; double height; } indicatorImageViewSize;

- (void)jx_refreshState:(id)a0;
- (void)jx_contentScrollViewDidScroll:(id)a0;
- (void)jx_selectedCell:(id)a0;
- (void)setupIndicatorImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
