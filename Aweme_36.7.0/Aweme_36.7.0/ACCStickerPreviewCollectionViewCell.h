@class UIImageView, UILabel;

@interface ACCStickerPreviewCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *downloadIcon;
@property (retain, nonatomic) UIImageView *loadingIcon;

+ (id)identifier;

- (void)p_startLoadingAnimation;
- (id)createRotationAnimation;
- (void)p_stopLoadingAnimation;
- (void)configCellWithEffect:(id)a0;
- (void)showCurrentTag:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateDownloadStatus:(long long)a0;

@end
