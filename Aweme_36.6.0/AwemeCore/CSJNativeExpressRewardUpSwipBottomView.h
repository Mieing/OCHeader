@class UIImageView, UILabel, UIView;

@interface CSJNativeExpressRewardUpSwipBottomView : UIView

@property (retain, nonatomic) UIView *arrowView;
@property (retain, nonatomic) UIImageView *arrowUp;
@property (retain, nonatomic) UIImageView *arrowBottom;
@property (retain, nonatomic) UILabel *label;

- (id)arrowAnimationGroup:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
