@class UIImageView, UILabel;

@interface ACCAIGCUGCFusionCreationToolsShotcutTail : MJRefreshComponent

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) long long lastRefreshCount;
@property (nonatomic) double lastRightDelta;
@property (nonatomic) double contentInsetLeft;

- (void)onThemeChanged;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)p_setupViews;
- (void)bindService;
- (double)happenOffsetX;
- (double)widthForContentBreakView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end
