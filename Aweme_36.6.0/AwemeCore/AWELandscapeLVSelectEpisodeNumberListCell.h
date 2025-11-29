@class LOTAnimationView, AWELVideoEpisodeInfoModel, UILabel, UIView;

@interface AWELandscapeLVSelectEpisodeNumberListCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *playingContainerView;
@property (retain, nonatomic) LOTAnimationView *playingAnimationView;
@property (retain, nonatomic) UILabel *playingLabel;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) Class longVideoUtil;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfo;

+ (id)reuseIdentifier;

- (void)updateWithSelectedStatus:(BOOL)a0;
- (void)updateNumberingInfoWithEpisodeInfo:(id)a0;
- (void)setupSelectedUI:(BOOL)a0;
- (void)updateWithEpisodeInfo:(id)a0 selected:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
