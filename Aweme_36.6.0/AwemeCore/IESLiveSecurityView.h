@class UITextField, UIView;

@interface IESLiveSecurityView : UIView

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) UIView *canvasView;
@property (nonatomic, getter=isSecureContent) BOOL secureContent;

+ (BOOL)isSupportSecureContent;

- (void)setupCanvasViewIfNeeded;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)sendSubviewToBack:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)bringSubviewToFront:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;
- (void)exchangeSubviewAtIndex:(long long)a0 withSubviewAtIndex:(long long)a1;

@end
