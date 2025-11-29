@class UIImageView, HTSLiveToolbarItem, UILabel, MASConstraint, UIButton;
@protocol IESLiveSubscription;

@interface IESLiveGuideAbilityContainerCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *countButton;
@property (retain, nonatomic) MASConstraint *imageHeight;
@property (retain, nonatomic) MASConstraint *imageWidth;
@property (retain, nonatomic) id<IESLiveSubscription> subscription_redDot;
@property (retain, nonatomic) id<IESLiveSubscription> subscription_disable;
@property (retain, nonatomic) id<IESLiveSubscription> subscription_select;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HTSLiveToolbarItem *item;

- (void)configCellWithConfigItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
