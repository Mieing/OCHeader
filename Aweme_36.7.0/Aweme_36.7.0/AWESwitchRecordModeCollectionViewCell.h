@class UIImageView, UILabel, UIView, AWESwitchModeSingleTabConfig;

@interface AWESwitchRecordModeCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *topRightTipLabel;
@property (retain, nonatomic) UIView *infoGradientView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWESwitchModeSingleTabConfig *tabConfig;
@property (nonatomic) BOOL cellSelected;
@property (retain, nonatomic) UIView *redDotView;
@property (nonatomic) double contentViewHeight;
@property (nonatomic) long long fontWeight;
@property (nonatomic) long long unSelectedFontWeight;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIView *badgeContainer;
@property (nonatomic) BOOL styleConfiged;

+ (long long)cellWidthWithTabConfig:(id)a0 viewConfig:(id)a1;
+ (id)identifier;

- (void)showRedDot:(BOOL)a0;
- (id)topRightTipText;
- (void)updateInfoViewHidden:(BOOL)a0;
- (void)showTopRightTipIfNeeded;
- (void)p_configSubviewLayout;
- (void)p_refreshImageAndTitleLayout;
- (void)buildWithTabConfig:(id)a0;
- (void)refreshColorWithSelected:(BOOL)a0 uiColor:(id)a1;
- (void)updateImageViewShowStatus:(BOOL)a0;
- (void)configOnceCommonStyleWithViewConfig:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
