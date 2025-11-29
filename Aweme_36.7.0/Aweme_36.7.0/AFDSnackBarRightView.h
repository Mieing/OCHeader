@class NSString, UIImage, DUXButton, UIButton;

@interface AFDSnackBarRightView : UIView

@property (nonatomic) double paddingForButtons;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (retain, nonatomic) UIImage *dismissButtonImage;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) UIButton *dismissButton;

- (void)setupConstaints;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)confirm;

@end
