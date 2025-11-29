@class UIView, IESGCPDetailBaseView;

@interface IESGCPDetailBottomContainerView : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailBaseView *childView;
@property (retain, nonatomic) UIView *borderLine;
@property (retain, nonatomic) IESGCPDetailBaseView *floatChildView;

- (void)removeAllSubviews;
- (void)bindViewModel:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)setupViews;

@end
