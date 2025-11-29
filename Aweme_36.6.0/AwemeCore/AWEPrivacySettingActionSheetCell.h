@class UIView, UIStackView, UIImageView, AWEBinding, UILabel, MASConstraint, CAShapeLayer;
@protocol AWESettingSwitchProtocol;

@interface AWEPrivacySettingActionSheetCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL onlyBottomLine;
@property (nonatomic) BOOL drawLine;
@property (nonatomic) BOOL useCardUIStyle;
@property (retain, nonatomic) AWEBinding *selectBinding;
@property (retain, nonatomic) AWEBinding *enableBinding;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MASConstraint *iconSizeConstraint;
@property (retain, nonatomic) MASConstraint *iconCenterYConstraint;
@property (retain, nonatomic) MASConstraint *cardUIIconCenterYConstraint;
@property (retain, nonatomic) CAShapeLayer *topLine;
@property (retain, nonatomic) CAShapeLayer *bottomLine;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL shouldShowSelectSwtich;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *selectSwitch;
@property (retain, nonatomic) UIStackView *titlesStack;
@property (nonatomic) BOOL fromHalfScreen;

+ (Class)aAWEBrandColorAdapterClass;
+ (double)getTitleLabelHeight:(id)a0 font:(id)a1 width:(double)a2;

- (void)configModel:(id)a0;
- (id)aAWEBrandColorAdapter;
- (void)p_layoutUI;
- (void)changeSwitchStatus:(id)a0;
- (void)p_updateTitlesWithModel:(id)a0;
- (void)p_updateSelectSwitch:(id)a0;
- (void)p_updateIconImageView:(id)a0;
- (void)setupBinding:(id)a0;
- (void)p_updateIconImageWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
