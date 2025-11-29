@class UILabel, UIView;

@interface AWEPadKeyboardBindingsTipsView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipsTitleLabel;
@property (copy, nonatomic) id /* block */ onDidDismissCallback;

- (BOOL)keyboardTipsViewLayoutCrashFixEnable;
- (id)createNormalKeyTipsView:(id)a0 tips:(id)a1;
- (id)createArrowTipsView;
- (id)arrowIconViewWithImageName:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;
- (void)setupView;

@end
