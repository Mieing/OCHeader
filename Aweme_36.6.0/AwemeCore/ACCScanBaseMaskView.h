@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface ACCScanBaseMaskView : UIView <ACCScanBaseMaskViewStudioProxy>

@property (retain, nonatomic) UILabel *searchTypeAlertLabel;
@property (nonatomic) BOOL shadowAnimating;
@property (retain, nonatomic) CAGradientLayer *shadowLayer;
@property (retain, nonatomic) UILabel *bottomTipView;
@property (retain, nonatomic) UILabel *tabAlertLabel;
@property (retain, nonatomic) UIImageView *tabAlertImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAlertWithText:(id)a0;
- (void)updateTipContent:(id)a0;
- (void)updateTipContentFont:(id)a0;
- (void)removeShadow;
- (void)showImageAlert;
- (void)makeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withOrientation:(long long)a1;
- (void)setShadow;
- (BOOL)deviceIsIpad;
- (BOOL)needShowBottomTipView;
- (id)tabAlertName;
- (BOOL)needAutoHideAlert;
- (id)tabAlertImage;
- (void).cxx_destruct;
- (void)hideAlert;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)showAlert:(id)a0;

@end
