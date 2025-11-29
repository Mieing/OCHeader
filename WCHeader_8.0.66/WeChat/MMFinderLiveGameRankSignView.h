@class CAGradientLayer, CALayer, FinderLiveBadgeInfo, MMWebImageView, MMUILabel;

@interface MMFinderLiveGameRankSignView : UIView

@property (nonatomic) unsigned int rank;
@property (retain, nonatomic) FinderLiveBadgeInfo *badgeInfo;
@property (nonatomic) long long uiStyle;
@property (nonatomic) long long uiMode;
@property (retain, nonatomic) MMWebImageView *rankImgView;
@property (retain, nonatomic) MMUILabel *signLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CALayer *colorLayer;
@property (nonatomic) double currentLayoutFontScale;
@property (nonatomic) BOOL isCustomizedAccessibilityLabel;

+ (struct CGSize { double x0; double x1; })getGameRankSizeWithRank:(id)a0 uiStyle:(long long)a1;
+ (id)signLabelFontForStyle:(long long)a0;
+ (double)signIconWidthForStyle:(long long)a0;
+ (double)signIconHeightForStyle:(long long)a0;
+ (double)insetLeftForStyle:(long long)a0;
+ (double)insetRightForStyle:(long long)a0;
+ (double)fixHeightForStyle:(long long)a0;
+ (double)insetTopForStyle:(long long)a0;

- (id)initWithUIStyle:(long long)a0 uiMode:(long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutRankImgView;
- (void)layoutSignLabel;
- (void)updateUIStyle:(long long)a0;
- (void)updateBadgeInfo:(id)a0;
- (void)updateLayoutFontScale;
- (void)refresh;
- (id)accessibilityLabel;
- (BOOL)isSameBadgeInfo:(id)a0;
- (void)initDefaultLayoutFontScale;
- (void)updateSelfSize;
- (id)getSignTextColor;
- (void).cxx_destruct;

@end
