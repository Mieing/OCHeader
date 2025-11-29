@class UIImageView;

@interface IESECShopMomentsStatusView : UIView

@property (retain, nonatomic) UIImageView *skeletonView;
@property (retain, nonatomic) UIImageView *statusImageView;

- (void)showEmptyView;
- (void)showSkeletonView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)showErrorView;

@end
