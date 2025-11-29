@class NSString, ACCStickerPannelUIConfig, UIImageView, AWECircularProgressView;

@interface AWEBaseStickerCollectionViewCell : UICollectionViewCell

@property (nonatomic) unsigned long long downloadStatus;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (copy, nonatomic) NSString *stickerName;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *downloadImgView;
@property (retain, nonatomic) AWECircularProgressView *downloadProgressView;
@property (copy, nonatomic) NSString *stickerId;

+ (id)identifier;

- (void)downloadProgressViewScaleDisappear;
- (void)configCellWithImage:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setupUI;
- (void)updateDownloadProgress:(double)a0;

@end
