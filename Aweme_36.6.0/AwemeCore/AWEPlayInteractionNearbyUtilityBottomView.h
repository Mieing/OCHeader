@class UIImageView, UILabel, UIView;

@interface AWEPlayInteractionNearbyUtilityBottomView : UIView

@property (retain, nonatomic) UIView *nearbyMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *ruleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)__buildUI;
- (void)__configUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
