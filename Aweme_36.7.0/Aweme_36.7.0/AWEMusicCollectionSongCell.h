@class UIStackView, AWEMusicSongWaveView, UIImageView, AWEMusicCollectionSongCellConfig, UILabel, UIView, UIButton;

@interface AWEMusicCollectionSongCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (weak, nonatomic) UIView *tagBackgroundView;
@property (weak, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UIView *recommendTagView;
@property (retain, nonatomic) UIView *fullTagView;
@property (retain, nonatomic) UIView *previewTagView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIStackView *playStackView;
@property (retain, nonatomic) UIView *songWaveContainerView;
@property (retain, nonatomic) AWEMusicSongWaveView *songWaveView;
@property (retain, nonatomic) UIButton *collectButton;
@property (retain, nonatomic) UIImageView *collectImageView;
@property (nonatomic) BOOL isCollected;
@property (retain, nonatomic) UIView *offLineCoverBGView;
@property (retain, nonatomic) UIImageView *offLineCoverIconView;
@property (retain, nonatomic) UILabel *unAvailableLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (weak, nonatomic) AWEMusicCollectionSongCellConfig *lastRefreshConfig;
@property (copy, nonatomic) id /* block */ clickCollectButtonBlock;

- (void)configSubviews;
- (void)collectButtonClick:(id)a0;
- (void)refreshWithConfig:(id)a0;
- (void)p_showUnavailableStateIfNeed:(BOOL)a0;
- (void)p_showPlaylistUnavailableStateIfNeed:(BOOL)a0;
- (void)updateCollectButtonAccessibility;
- (void)p_collectButtonClick:(id)a0;
- (id)p_makeTagViewWithTitle:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;

@end
