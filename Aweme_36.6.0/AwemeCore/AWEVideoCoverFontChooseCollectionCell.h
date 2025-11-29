@class NSString, UIImageView, UIImage, AWEStoryFontModel, UILabel;

@interface AWEVideoCoverFontChooseCollectionCell : UICollectionViewCell

@property (retain, nonatomic) NSString *currentThumbURLString;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) UIImageView *downloadImageView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIImage *originThumbImage;
@property (retain, nonatomic) AWEStoryFontModel *fontModel;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)reuseIdentifierKey;

- (id)createRotationAnimation;
- (void)startDownloadAnimation;
- (void)refreshFont;
- (void)updatePlaceholderImage;
- (void)stopDownloadAnimationWithSuccess:(BOOL)a0;
- (void)refreshWithFontDownloadState;
- (void)disableCell;
- (void)resetCell;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
