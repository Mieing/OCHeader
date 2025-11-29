@class UIImageView, AWEFeedVideoTagView, UIView, AWEOriginalAdModel, YYLabel;

@interface AWESearchHotspotHorizontalAutoPlayCellController : AWESearchHorizontalAutoPlayCellController

@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) YYLabel *likeCountLabel;
@property (retain, nonatomic) YYLabel *timeLabel;
@property (retain, nonatomic) id adTrackerPlugin;
@property (retain, nonatomic) AWEFeedVideoTagView *videoTagView;
@property (retain, nonatomic) UIView *darkMaskView;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;

+ (struct CGSize { double x0; double x1; })horizontalCellSizeWithModel:(id)a0;

- (void)cellWillDisplay;
- (void)updateAccessibilityWithModel:(id)a0;
- (void)setupSubViews;
- (void)setupAdTrackerPlugin;
- (void)cellChangeInScrollView:(id)a0 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateModel:(id)a0;

@end
