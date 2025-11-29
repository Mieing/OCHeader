@class UILabel, UIImageView, UIView;

@interface ACCVoiceChangerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UIImageView *loadingView;
@property (nonatomic) BOOL isDownloading;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL isIconCell;

+ (id)cellIdentifier;

- (void)configWithModel:(id)a0;
- (void)p_startDownloadAnimation;
- (void)p_stopDownloadAnimation;
- (id)createRotationAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setDownloadStatus:(BOOL)a0;

@end
