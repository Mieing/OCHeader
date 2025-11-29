@class UIBezierPath, CAShapeLayer;

@interface IESLiveBottomShortcutPresentComboView : UIView

@property (nonatomic) double animationDuration;
@property (copy, nonatomic) id /* block */ comboEnd;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) UIBezierPath *path;

- (void)startCountdownAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andColors:(id)a1 comboEnd:(id /* block */)a2;
- (void)_setupUIWithColors:(id)a0;
- (void)stopCountdownAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
