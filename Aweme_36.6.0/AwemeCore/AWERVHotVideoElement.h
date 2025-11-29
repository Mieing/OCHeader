@class AWERVHotVideoVenationView, AWEHotVideoShimmerView, AWERVHotVideoViewModel, MASConstraint, AWERVHotVideoHorizontalScrollView;

@interface AWERVHotVideoElement : AWERVVideoInfoBaseElement

@property (retain, nonatomic) AWERVHotVideoHorizontalScrollView *horizontalScrollView;
@property (retain, nonatomic) AWERVHotVideoVenationView *venationView;
@property (retain, nonatomic) MASConstraint *heightConstraint;
@property (retain, nonatomic) AWEHotVideoShimmerView *shimmerView;
@property (retain, nonatomic) AWERVHotVideoViewModel *viewModel;

- (void)resetIfNeed;
- (void)refreshHotVideoData;
- (double)getHorizontalScrollViewHeight;
- (double)getVenationViewHeight;
- (id)noNeedSimultaneouslyGestureView;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)setupUI;
- (void)addObservers;

@end
