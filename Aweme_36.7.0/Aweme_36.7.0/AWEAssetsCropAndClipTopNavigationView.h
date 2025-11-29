@class UIButton;

@interface AWEAssetsCropAndClipTopNavigationView : UIView

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (copy, nonatomic) id /* block */ saveCallback;
@property (copy, nonatomic) id /* block */ cancelCallback;

- (void)onCancelAction:(id)a0;
- (void)onSaveAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
