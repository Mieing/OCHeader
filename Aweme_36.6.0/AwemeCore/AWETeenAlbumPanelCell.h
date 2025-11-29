@class UIImageView, AWEAwemeModel, UILabel, LOTAnimationView;

@interface AWETeenAlbumPanelCell : UICollectionViewCell

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) LOTAnimationView *playingView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *durationIcon;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *likeLabel;
@property (nonatomic) BOOL isSelected;

- (void)configWithModel:(id)a0;
- (void)p_updateDescription;
- (void)p_updateLike;
- (void)p_updateCover;
- (void)p_updateDuration;
- (id)p_minuteFormatStringWithDuration:(id)a0;
- (id)p_secondsFormatStringWithDuration:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
