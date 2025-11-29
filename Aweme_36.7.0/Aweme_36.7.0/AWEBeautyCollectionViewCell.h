@class AWEScrollStringLabel, NSString, NSDictionary, UIImageView, UILabel, AWEBeautyConfig, UIView;

@interface AWEBeautyCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSDictionary *iconPhotoInfo;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelectStatus;
@property (nonatomic) BOOL isSplineLineStatus;
@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UIImageView *rightNextLevelPhotoView;
@property (retain, nonatomic) AWEBeautyConfig *beautyConfig;
@property (retain, nonatomic) UIView *splitelineSpaceView;
@property (retain, nonatomic) UIView *splitelineView;
@property (retain, nonatomic) UIView *iconBGView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) AWEScrollStringLabel *scrollTitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *nextLevelImageView;
@property (retain, nonatomic) UIView *dotIndicator;
@property (retain, nonatomic) UIView *selectedIndicator;
@property (nonatomic) BOOL isGrayedOutStatus;

+ (double)beautyCellHeightWithBeautyConfig:(id)a0;
+ (double)beautyCellIconHeight;
+ (double)beautyCellDotSpace;
+ (double)beautyCellBorderWidth;
+ (double)beautyBorderEdge;

- (void)updateSplitelineFrames;
- (void)adjustTitleLabelAndNextLevelImageViewCenter;
- (void)layoutUIIfNeededWithCellWidth:(double)a0;
- (void)p_setRoundCornerOfView:(id)a0 cornerRadius:(double)a1 borderWidth:(double)a2;
- (void)p_setRoundCornerOfView:(id)a0 cornerRadius:(double)a1;
- (void)updateSelectedState:(BOOL)a0;
- (void)updateIconWithURLs:(id)a0;
- (void)updateIconWithImageName:(id)a0;
- (void)updateTitle:(id)a0 shouldHideArrow:(BOOL)a1;
- (void)updateDotIndicatorHiddenState:(BOOL)a0;
- (void)updateNewTitle:(id)a0 shouldHideArrow:(BOOL)a1;
- (double)beautyCellIconCornerRadius;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateFrames;

@end
