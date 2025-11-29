@class UIImageView, UIVisualEffectView, UILabel, UIView, AWEHomePageRemoteCommonButtonDataModel;

@interface AWEHomePageRemoteTipsEntryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) long long themeType;
@property (retain, nonatomic) AWEHomePageRemoteCommonButtonDataModel *model;
@property (retain, nonatomic) UIVisualEffectView *blurView;

- (void)configWithModel:(id)a0;
- (void)updatePanelThemeStyle:(long long)a0;
- (void)updateImageAndColor;
- (id)iconImageUrlArray;
- (id)iconPlaceholderImage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (id)titleLabelTextColor;

@end
