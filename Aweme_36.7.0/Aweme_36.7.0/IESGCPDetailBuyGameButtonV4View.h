@class IESGCPDetailBuyGameButtonContainerView;

@interface IESGCPDetailBuyGameButtonV4View : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailBuyGameButtonContainerView *buyButton;

- (void)bindViewModel:(id)a0;
- (void)makeViewTrackNode;
- (id)trackNodePropType:(int)a0;
- (id)trackNodePlatformType:(int)a0;
- (id)trackNodeGoodsType:(int)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
