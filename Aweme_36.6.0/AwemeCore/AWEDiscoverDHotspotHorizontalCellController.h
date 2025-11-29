@class UIImageView, AWEFeedVideoTagView, UIView, UILabel, YYLabel;

@interface AWEDiscoverDHotspotHorizontalCellController : AWEDiscoverDHorizontalBaseCellController

@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) YYLabel *likeCountLabel;
@property (retain, nonatomic) YYLabel *timeLabel;
@property (retain, nonatomic) AWEFeedVideoTagView *videoTagView;
@property (retain, nonatomic) UIView *darkMaskView;
@property (retain, nonatomic) UILabel *despLabel;

+ (struct CGSize { double x0; double x1; })horizontalCellSizeWithModel:(id)a0;

- (void)cellWillDisplay;
- (void)updateModel:(id)a0 playerHeight:(double)a1;
- (void)updateAccessibilityWithModel:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)updateModel:(id)a0;

@end
