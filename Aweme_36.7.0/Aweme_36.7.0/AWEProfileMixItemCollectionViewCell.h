@class AWEProfileBottomTriangleBorderView, AWEMixPrivateEntranceStackView, UIImageView, UILabel, AWETouchableView, UIView;

@interface AWEProfileMixItemCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWETouchableView *backView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *redPointView;
@property (retain, nonatomic) UIView *hintBackView;
@property (retain, nonatomic) UIView *creatableMixView;
@property (retain, nonatomic) UILabel *creatableMixLabel;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWEMixPrivateEntranceStackView *imageStackView;
@property (retain, nonatomic) AWEProfileBottomTriangleBorderView *triangleBorderView;

+ (double)itemWidthWithMixName:(id)a0;
+ (double)getTitleWidthWithMixName:(id)a0;
+ (double)getTextWidthWithText:(id)a0 fontSize:(double)a1 weight:(long long)a2;
+ (id)getprofileMixVideoRedPointShownKey;
+ (double)privateItemWidthWithModel:(id)a0;
+ (double)itemWidthOfMixManagerWithName:(id)a0 creatableNum:(long long)a1;
+ (double)itemWidthWithMixName:(id)a0 isCurrentUser:(BOOL)a1;

- (void)layoutSubviews;
- (void)awe_themeReload;
- (void)configWithMixVideoModel:(id)a0;
- (void)willTerminateAPP:(id)a0;
- (void)remakeViewLayout;
- (void)configWithMixVideoModel:(id)a0 mixManagerNeedRecommendTip:(BOOL)a1;
- (void)configWithMixVideoModel:(id)a0 mixManagerNeedRecommendTip:(BOOL)a1 highlight:(BOOL)a2;
- (void)remakeMixManagerLayoutWithText:(id)a0;
- (void)updateMixViedeoHintStatusWithModel:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)accessibilityValue;
- (void)setupUI;
- (BOOL)isInDarkMode;

@end
