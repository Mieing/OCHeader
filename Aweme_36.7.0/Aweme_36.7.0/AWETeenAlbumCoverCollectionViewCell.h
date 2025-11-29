@class UIView, AWEMinorAlbum, AWEGradientView, UIImageView, BDImageView, YYLabel, AWETeenAlbumCardLabel, UILabel;

@interface AWETeenAlbumCoverCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEMinorAlbum *model;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) BDImageView *coverView;
@property (retain, nonatomic) UILabel *totalEpisodeLabel;
@property (retain, nonatomic) AWEGradientView *coverMaskView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) AWETeenAlbumCardLabel *cardLabel;
@property (nonatomic) long long maximumLines;
@property (nonatomic) long long colorMode;
@property (nonatomic) BOOL isPlaying;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0 constraintWidth:(double)a1 maximumLines:(long long)a2;
+ (struct CGSize { double x0; double x1; })footerSizeWithModel:(id)a0 constraintWidth:(double)a1 maximumLines:(long long)a2;
+ (id)titleAttrStrWithModel:(id)a0 colorMode:(long long)a1;
+ (double)titleHeightWithAttrStr:(id)a0 cellWidth:(double)a1 maximumLines:(long long)a2;
+ (double)footerHeightWithTitleHeight:(double)a0;

- (void)awe_themeDidChange:(long long)a0;
- (void)p_setupView;
- (void)p_updateDescription;
- (void)configCellWithModel:(id)a0 maximumLines:(long long)a1;
- (void)configCellWithModel:(id)a0 maximumLines:(long long)a1 shouldShowAlbumLabel:(BOOL)a2;
- (void)configCellWithModel:(id)a0 maximumLines:(long long)a1 shouldShowAlbumLabel:(BOOL)a2 colorMode:(long long)a3;
- (void)p_updateCover;
- (void)p_updateColorMode;
- (void)p_addCardLabelIfNeeded;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
