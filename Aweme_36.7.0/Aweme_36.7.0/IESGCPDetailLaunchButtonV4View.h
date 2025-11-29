@class IESGCPDetailUniversalButtonContainerView;

@interface IESGCPDetailLaunchButtonV4View : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailUniversalButtonContainerView *launchButton;

- (void)bindViewModel:(id)a0;
- (void)makeViewTrackNode;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
