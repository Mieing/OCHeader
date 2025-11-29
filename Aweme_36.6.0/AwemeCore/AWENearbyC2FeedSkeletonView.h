@class UIView, AWENearbySkeletonView;

@interface AWENearbyC2FeedSkeletonView : UIView

@property (retain, nonatomic) AWENearbySkeletonView *headImgHolder;
@property (retain, nonatomic) UIView *whiteBGView;
@property (retain, nonatomic) AWENearbySkeletonView *firstLineHolder;
@property (retain, nonatomic) AWENearbySkeletonView *secondLineHolder;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupUI;

@end
