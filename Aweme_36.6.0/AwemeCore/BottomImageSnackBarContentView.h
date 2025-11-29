@class NSString, DUXButton, UIView, UIButton;

@interface BottomImageSnackBarContentView : UIView

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) double buttonWidth;
@property (retain, nonatomic) DUXButton *containerButton;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIButton *closeButton;

- (double)setupRightContentUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
