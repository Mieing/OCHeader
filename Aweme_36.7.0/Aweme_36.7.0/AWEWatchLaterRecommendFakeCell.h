@class UIView;

@interface AWEWatchLaterRecommendFakeCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UIView *titleLabel;
@property (retain, nonatomic) UIView *watchTimeLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
