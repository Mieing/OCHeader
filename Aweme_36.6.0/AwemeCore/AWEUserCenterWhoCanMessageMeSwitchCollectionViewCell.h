@class UIStackView, NSString, AWESettingItemModel, DUXSwitch, UILabel, UIView, AWEBinding;

@interface AWEUserCenterWhoCanMessageMeSwitchCollectionViewCell : UICollectionViewCell <AWEUserCenterWhoCanMessageMeCollectionReusableViewProtocol>

@property (retain, nonatomic) AWESettingItemModel *model;
@property (retain, nonatomic) UIStackView *titlesStack;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) DUXSwitch *whoCanMessageMeSwitch;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) AWEBinding *selectBinding;
@property (retain, nonatomic) AWEBinding *enableBinding;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL useCardUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateDetailHeight:(id)a0;

- (void)setupCorners;
- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (void)highlightWithAnimation;
- (void)p_resetPositionConstraintsWhenHasDetail:(id)a0;
- (void)p_changeSwitchWithModel:(id)a0;
- (void)configTextAndSizeWithViewModel:(id)a0;
- (void)highlightWithAnimationWithDuration:(double)a0 dismissDelay:(double)a1;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)switchValueChanged:(BOOL)a0;

@end
