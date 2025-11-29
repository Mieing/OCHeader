@protocol CachalotRenderPipelineComponentViewModel, AWESearchCachalotCardViewProtocol;

@interface AWESearchHomePageHybridCacgalotContainerView : UIView

@property (nonatomic) long long cornerType;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) id<AWESearchCachalotCardViewProtocol> viewDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewDelegate:(id)a1 viewModel:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
