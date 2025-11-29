@class AWEAwemeModel, UIView, UIImage, AWEGradientView, AWEListenFeedBackgroundGradientView, AWEListenFeedContext, UIImageView, AWEListenFeedBgBorderGradientView, UILabel;

@interface AWEListenFeedExtendCoverCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEListenFeedBackgroundGradientView *backgroundGradientView;
@property (retain, nonatomic) AWEListenFeedBgBorderGradientView *bgBorderGradientView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *episodeLabel;
@property (retain, nonatomic) UIView *episodeBlurView;
@property (retain, nonatomic) UIImage *defaultBgImage;
@property (nonatomic) long long maxEpisode;
@property (nonatomic) long long currentEpisode;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double containerCornerRadius;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;

- (struct CGSize { double x0; double x1; })coverImageViewSize;
- (void)updatePlayerIfNeeded:(id)a0;
- (void)setContentOffsetXWithProgress:(double)a0 itemSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateBackgroundImageViewWithModel:(id)a0 playModel:(id)a1;
- (void)updateEpisodeLabel;
- (void)updateOptimizeUIConstraints;
- (void)setupContainerCornerRadius;
- (double)coverImageViewBottomMargin;
- (double)coverImageViewTopMargin;
- (void)updateWithModel:(id)a0 playModel:(id)a1 mixVideoModel:(id)a2 context:(id)a3;
- (void)updateLoadingCell;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setupUI;
- (void)showLoading;

@end
