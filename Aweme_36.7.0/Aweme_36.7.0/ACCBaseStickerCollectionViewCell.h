@class NSString, UIImageView, AWECircularProgressView;

@interface ACCBaseStickerCollectionViewCell : UICollectionViewCell

@property (nonatomic) unsigned long long downloadStatus;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *stickerName;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWECircularProgressView *downloadProgressView;
@property (nonatomic) BOOL needAnimation;

+ (id)identifier;

- (void)downloadProgressViewScaleDisappear;
- (void)configCellWithInfoStickerModel:(id)a0 compeletion:(id /* block */)a1;
- (void)configCellWithEffectModel:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupUI;
- (void)updateDownloadProgress:(double)a0;

@end
