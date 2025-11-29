@class UIStackView, AWEMusicSongWaveView, UIImageView, DUXRadioBox, UILabel, UIView, UIButton;
@protocol AWEMusicPlaylistTableViewCellViewModelProtocol, AWEMusicPlaylistTableViewCellDelegate;

@interface AWEMusicPlaylistTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageV;
@property (retain, nonatomic) UILabel *titleLB;
@property (retain, nonatomic) UILabel *countLB;
@property (retain, nonatomic) UIImageView *privateImageView;
@property (retain, nonatomic) UIStackView *horizontaLine;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) UIImageView *myFavoriteIcon;
@property (retain, nonatomic) UIView *songWaveContainerView;
@property (retain, nonatomic) AWEMusicSongWaveView *songWaveView;
@property (retain, nonatomic) UIView *checkBoxContainerView;
@property (retain, nonatomic) DUXRadioBox *checkBox;
@property (retain, nonatomic) id<AWEMusicPlaylistTableViewCellViewModelProtocol> cellModel;
@property (weak, nonatomic) id<AWEMusicPlaylistTableViewCellDelegate> delegate;

- (void)showHighlightAnimation;
- (void)displayWithModel:(id)a0;
- (void)didTapAddButton;
- (void)p_didClickCheckBox;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;

@end
