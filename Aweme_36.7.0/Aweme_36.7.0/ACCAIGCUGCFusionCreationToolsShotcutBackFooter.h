@class UIImageView, UILabel;

@interface ACCAIGCUGCFusionCreationToolsShotcutBackFooter : MJRefreshBackFooter

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipsLabel;

- (void)onThemeChanged;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (void)bindService;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
