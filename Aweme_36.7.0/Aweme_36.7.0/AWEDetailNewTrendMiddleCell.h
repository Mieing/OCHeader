@class AWEDetailNewTrendMiddleViewController, AWEDetailShimmerView;

@interface AWEDetailNewTrendMiddleCell : UICollectionViewCell

@property (retain, nonatomic) AWEDetailNewTrendMiddleViewController *middleViewController;
@property (retain, nonatomic) AWEDetailShimmerView *shimmerView;

- (void)didEndDisplay;
- (void)configUIWithModels:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)willDisplay;

@end
