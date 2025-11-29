@class MMCameraTemplateItem, MJCircleProgressView, UILabel, UIView, MMWebImageView;

@interface MJShootTemplatePanelItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *versionLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (nonatomic) BOOL isCellSelected;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *progressBGView;
@property (retain, nonatomic) MJCircleProgressView *progressView;
@property (retain, nonatomic) MMCameraTemplateItem *item;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)configCellWithItem:(id)a0;
- (void)setDownloadingProgress:(float)a0;
- (void)showLoadingUI;
- (void)removeLoadingUI;
- (void).cxx_destruct;

@end
