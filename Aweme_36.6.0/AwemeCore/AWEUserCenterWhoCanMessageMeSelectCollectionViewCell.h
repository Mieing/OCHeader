@class NSString, UIImageView, AWESettingItemModel, UILabel, UIView, AWEBinding;

@interface AWEUserCenterWhoCanMessageMeSelectCollectionViewCell : UICollectionViewCell <AWEUserCenterWhoCanMessageMeCollectionReusableViewProtocol>

@property (retain, nonatomic) AWESettingItemModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectIconImageView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) AWEBinding *selectBinding;
@property (retain, nonatomic) AWEBinding *enableBinding;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL useCardUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupCorners;
- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (void)highlightWithAnimation;
- (void)highlightWithAnimationWithDuration:(double)a0 dismissDelay:(double)a1;
- (void)p_changeSelectWithModel:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
