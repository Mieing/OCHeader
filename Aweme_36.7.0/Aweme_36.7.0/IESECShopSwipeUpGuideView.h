@class LOTAnimationView, UILabel, UIView;

@interface IESECShopSwipeUpGuideView : UIView

@property (retain, nonatomic) UIView *instructionView;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *hintLabel;

- (void).cxx_destruct;
- (void)play;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
