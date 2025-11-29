@class UIButton, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEPageSheetView : UIView

@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *horizontalPanGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) double topCornerRadius;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *grabber;

- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
