@class UIView, NSString, UIImage, BDWebImageRequest, DVEStoryFontModel, UIImageView, DVEStoryFontManager, UILabel;

@interface DVETextStickerFontCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) NSString *currentThumbURLString;
@property (retain, nonatomic) BDWebImageRequest *currentRequest;
@property (retain, nonatomic) UIImage *fontImage;
@property (nonatomic) BOOL isSelectedCell;
@property (retain, nonatomic) DVEStoryFontManager *fontManager;
@property (retain, nonatomic) DVEStoryFontModel *selectFont;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *downloadImgView;
@property (retain, nonatomic) UIImageView *loadingImgView;

- (id)createRotationAnimation;
- (void)startDownloadAnimation;
- (void)refreshFont;
- (void)updatePlaceholderImage;
- (void)stopDownloadAnimationWithSuccess:(BOOL)a0;
- (void)configSelect:(BOOL)a0 isFromTextTemplate:(BOOL)a1;
- (void)refreshWithFontDownloadState;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
