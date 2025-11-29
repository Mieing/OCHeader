@class UIColor, NSString, UIImageView, UILabel, AWEPhotoMovieMusicItemView;

@interface AWEPhotoMusicEditorCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *downloadIcon;
@property (retain, nonatomic) UIImageView *loadingIcon;
@property (nonatomic) long long downloadStatus;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *recommendedImageView;
@property (copy, nonatomic) NSString *orignalText;
@property (retain, nonatomic) AWEPhotoMovieMusicItemView *musicItemView;
@property (retain, nonatomic) UIColor *titleLabelColor;
@property (nonatomic) BOOL useBigLoadingIcon;

- (id)createRotationAnimation;
- (void)stopDownloadAnimation;
- (void)startDownloadAnimation;
- (void)setIsCurrent:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setMusicThumbnailURLList:(id)a0;
- (void)setIsCurrent:(BOOL)a0 animated:(BOOL)a1;
- (void)setMusicThumbnailURLList:(id)a0 placeholder:(id)a1;
- (void)setDuration:(double)a0 show:(BOOL)a1;
- (void)setMusicThumbnailImage:(id)a0;
- (void)startPlayingAnimation;
- (void)stopPalyingAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText:(id)a0;
- (void)setIsRecommended:(BOOL)a0;
- (void)p_updateAppearance;

@end
