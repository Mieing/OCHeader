@class AWEDetailShimmerView, IESServiceProvider;

@interface AWEDetailShimmerContainerView : UIView

@property (weak, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) AWEDetailShimmerView *shimmerView;

- (void)updateToModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceProvider:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
