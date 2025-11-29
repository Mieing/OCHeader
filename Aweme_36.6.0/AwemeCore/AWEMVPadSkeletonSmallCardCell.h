@class AWEDCFeedShimmerView;

@interface AWEMVPadSkeletonSmallCardCell : AWEMVSkeletonBaseCell

@property (retain, nonatomic) AWEDCFeedShimmerView *shimmerView;

- (void)startShimming;
- (void)stopShimming;
- (void)configWithAwemeModel:(id)a0;
- (double)descLabelHeight;
- (void)setupShimmerView;
- (double)descLabelTopMargin;
- (double)descLine2TopMargin;
- (double)descLine2Height;
- (double)authorViewHeight;
- (double)authorViewTopMargin;
- (BOOL)enableShimmerView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
