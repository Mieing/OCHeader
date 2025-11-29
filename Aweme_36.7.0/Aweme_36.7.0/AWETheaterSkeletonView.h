@class NSString, AWEShimmerView;

@interface AWETheaterSkeletonView : AWETheaterSkeletonBaseView <UIScrollViewDelegate>

@property (nonatomic) double skeletonHeight;
@property (retain, nonatomic) AWEShimmerView *shimmerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fakeItemViewWithRadius:(double)a0;
- (id)fakeHeaderView;
- (id)fakeHistoryView;
- (id)fakeHotLiveView;
- (id)fakeMoreFeedView;
- (id)fakeTipsLabel;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (double)viewHeight;
- (void)configureSubviews;

@end
