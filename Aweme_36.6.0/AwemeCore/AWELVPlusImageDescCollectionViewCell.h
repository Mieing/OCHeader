@class UIView, DUXTextTag, NSString, AWERelatedVideoPlayingAnimationView, AWEAwemeModel, UIImageView, AWELVideoEpisodeInfoModel, BDImageView, AWEGradientView, AWELVideoAlbumInfoModel, UILabel;

@interface AWELVPlusImageDescCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIView *rightContentView;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *updateRightLabel;
@property (retain, nonatomic) UILabel *diggCountLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UIView *rightSeparateLine;
@property (retain, nonatomic) UILabel *updateLabel;
@property (retain, nonatomic) DUXTextTag *videoTag;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *model;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfoModel;
@property (copy, nonatomic) NSString *titleUnit;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *animationView;
@property (retain, nonatomic) Class longVideoUtil;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)updateSelected:(BOOL)a0;
- (void)playingCell;
- (void)notPlayingCell;
- (id)getFormatDateStringWithUpdateTime:(double)a0;
- (void)updateWithAlbumModel:(id)a0 awemeModel:(id)a1;
- (void)updateWithModel:(id)a0 titleUnit:(id)a1 isHiddenUpdate:(BOOL)a2;
- (void)setTitleColorWithStr:(id)a0 selected:(BOOL)a1;
- (void).cxx_destruct;
- (void)setTitle:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (BOOL)isDarkMode;
- (void)setSeriesTitle:(BOOL)a0;

@end
