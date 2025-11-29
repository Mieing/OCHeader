@class UIButton, MMUIButton;

@interface WASMPageSheetBellringView : UIView

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) MMUIButton *button;
@property (retain, nonatomic) UIButton *iconButton;
@property (copy, nonatomic) id /* block */ selectedAction;
@property (copy, nonatomic) id /* block */ showTipsView;

+ (struct CGSize { double x0; double x1; })viewSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)onSelectedButtonClickWithShowToast:(BOOL)a0 toastText:(id)a1;
- (void)startAnimation;
- (void)stopAnimation;
- (void).cxx_destruct;

@end
