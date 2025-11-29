@class AWERelatedVideoPlayingAnimationView, NSString, AWELVideoEpisodeInfoModel, UILabel, UIView, BDImageView;

@interface AWERVLVImageEpisodesViewCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *durationContainerView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIView *runningView;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *animationView;
@property (retain, nonatomic) UILabel *runningLabel;
@property (retain, nonatomic) UIView *cornerMarkView;
@property (retain, nonatomic) UILabel *cornerMarkLabel;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *model;
@property (copy, nonatomic) NSString *titleUnit;
@property (nonatomic) BOOL isOnPanel;
@property (nonatomic) BOOL shouldSimplifyTitle;

- (void)updateSelected:(BOOL)a0;
- (void)updateCellWithModel:(id)a0 titleUnit:(id)a1 isHiddenDuration:(BOOL)a2;
- (void)updateLayoutForPanelStyle;
- (void)setDurationLabelText;
- (void)setCornerMarkLabelWithEpisodeModel:(id)a0;
- (id)getFormatDateStringWithUpdateTime:(double)a0;
- (void)disableDurationDisplay;
- (void).cxx_destruct;
- (void)setTitle:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
