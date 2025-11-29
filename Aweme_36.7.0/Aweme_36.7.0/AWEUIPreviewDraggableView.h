@class UIButton;

@interface AWEUIPreviewDraggableView : UIView

@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIButton *uiPreviewButton;
@property (retain, nonatomic) UIButton *closeButton;

- (struct CGPoint { double x0; double x1; })finalCenterForView:(id)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
