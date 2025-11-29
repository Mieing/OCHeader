@class UIColor, NSString, UIImageView, UIFont, UIView, UILabel, AWETitleRollingTextView;

@interface AWEComposerBeautyCollectionViewCell : UICollectionViewCell <ACCBeautyItemCellProtocol>

@property (nonatomic) unsigned long long iconStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *coverIconImageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWETitleRollingTextView *rollingTitleView;
@property (retain, nonatomic) UIView *appliedIndicator;
@property (retain, nonatomic) UIImageView *downloadImgView;
@property (retain, nonatomic) UIImageView *downloadingImgView;
@property (retain, nonatomic) UIView *flagDotView;
@property (nonatomic) BOOL textFolded;
@property (nonatomic) BOOL applied;
@property (retain, nonatomic) UIColor *rollingTitleViewColor;
@property (retain, nonatomic) UIColor *selectedIndicatorViewColor;
@property (retain, nonatomic) UIColor *namelblSelectColor;
@property (retain, nonatomic) UIColor *namelblUnSelectColor;
@property (retain, nonatomic) UIColor *appliedIndicatorColor;
@property (retain, nonatomic) UIColor *appliedIndicatorUnSelectColor;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL shouldShowAppliedInidicator;
@property (nonatomic) long long downloadStatus;
@property (nonatomic) BOOL useSystemSelection;
@property (nonatomic) BOOL isSmallIcon;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) double iconWidth;
@property (nonatomic) double selectIndicatorWidth;
@property (nonatomic) double selectBorderWidth;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIFont *unselectedFont;

+ (id)identifier;
+ (double)maxTextWidth;

- (void)addSubviews;
- (void)p_startLoadingAnimation;
- (void)updateWithSelected:(BOOL)a0;
- (id)createRotationAnimation;
- (void)configWithIconStyle:(unsigned long long)a0;
- (void)setFlagDotViewHidden:(BOOL)a0;
- (void)p_stopLoadingAnimation;
- (void)configWithRoundStyle;
- (void)configWithSquareStyle;
- (void)setImageWithUrls:(id)a0 placeholder:(id)a1;
- (void)configWithBeauty:(id)a0;
- (void)makeSelected;
- (void)makeDeselected;
- (void)setShouldShowAppliedIndicator:(BOOL)a0;
- (void)setShouldShowAppliedIndicatorWhenSwitchIsEnabled:(BOOL)a0;
- (void)enableCellItem:(BOOL)a0;
- (id)unselectedNameLabelTextColor;
- (void)configRollingTitleViewColor:(id)a0;
- (void)configSelectedIndicatorViewColor:(id)a0;
- (void)configNamelblSelectColor:(id)a0 unSelect:(id)a1;
- (void)configAppliedIndicatorColor:(id)a0 unSelect:(id)a1;
- (void)addCoverIconImageView:(id)a0;
- (void)removeCoverIconImageView;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setIconImage:(id)a0;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAvailable:(BOOL)a0;

@end
