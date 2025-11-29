@class AWERelatedVideoVacantView, AWEShimmerView;

@interface AWERVLVSkeletonScreenElement : AWERVVideoInfoBaseElement

@property (retain, nonatomic) AWEShimmerView *shimmerView;
@property (retain, nonatomic) AWERelatedVideoVacantView *retryView;

- (id)createBanner;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
