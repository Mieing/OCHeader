@class IESGCPDetailUniversalButtonContainerView;

@interface IESGCPDetailBetaApplyButtonV4View : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailUniversalButtonContainerView *betaApplyButton;

- (void)bindViewModel:(id)a0;
- (void)makeTrackerNode;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)addObservers;

@end
