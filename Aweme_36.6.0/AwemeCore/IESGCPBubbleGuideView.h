@class UILabel, UIImageView, UIView;

@interface IESGCPBubbleGuideView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL shouldHideWithTabSpace;

- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 duration:(double)a3 didShow:(id /* block */)a4;
- (void)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 didShow:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)hide;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
