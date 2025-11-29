@class AWEGradientView, AWEAwemeModel, LOTAnimationView, UIImageView, UILabel, UIView, BDImageView;

@interface AWELandscapeLVSelectEpisodeCoverListCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *playingContainerView;
@property (retain, nonatomic) LOTAnimationView *playingAnimationView;
@property (retain, nonatomic) UILabel *playingLabel;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) AWEGradientView *dateMaskView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIImageView *digIconImageView;
@property (retain, nonatomic) UILabel *digCountLabel;
@property (retain, nonatomic) UILabel *updateRightLabel;
@property (retain, nonatomic) UIView *rightSeparateLine;
@property (retain, nonatomic) Class longVideoUtil;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (id)reuseIdentifier;

- (void)setupFrameDrawingUI;
- (void)setupSelectedFrameDrawingUI:(BOOL)a0;
- (void)updateFrameDrawingInfoWithAwemeModel:(id)a0 isSeries:(BOOL)a1 isVariety:(BOOL)a2 isAppointmentVideo:(BOOL)a3;
- (id)getLongVideoAwemeEpisodeTitle:(id)a0;
- (void)updateWithSelectedStatus:(BOOL)a0;
- (void)updateWithAwemeModel:(id)a0 isSeries:(BOOL)a1 isVariety:(BOOL)a2 isAppointmentVideo:(BOOL)a3 isSelected:(BOOL)a4;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
