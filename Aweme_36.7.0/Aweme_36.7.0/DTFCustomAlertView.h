@class UILabel, NSString, DTFColorModel, UIFont, UIView, NSMutableArray, UIViewController;

@interface DTFCustomAlertView : UIView

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *messageText;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *sureText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } infoRect;
@property (retain, nonatomic) NSMutableArray *actions;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (copy, nonatomic) id /* block */ sureButtonAction;
@property (retain, nonatomic) UIViewController *vc;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *linesView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (nonatomic) BOOL isPermission;
@property (retain, nonatomic) DTFColorModel *colorModel;
@property (retain, nonatomic) NSMutableArray *alertBtnArray;
@property (retain, nonatomic) UIFont *font;

+ (void)showCustomAlertWithTitle:(id)a0 message:(id)a1 colorModel:(id)a2 actions:(id)a3 fromeVC:(id)a4;
+ (void)showPermissionAlertWithTitle:(id)a0 message:(id)a1 fromeVC:(id)a2;

- (void)setPermissionAlertView;
- (void)setPermissionViewFrame;
- (void)setAlertView;
- (void)setAlertViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSafeAreaLayout;
- (struct CGSize { double x0; double x1; })getBtnSizeWithPadding:(double)a0 font:(id)a1;
- (double)getMaxWidth;
- (double)getMinWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getRectWithText:(id)a0 font:(id)a1 maxWidth:(double)a2;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)hide;
- (void)layoutSubviews;
- (void)buttonTapped:(id)a0;
- (void)show;
- (id)initWithTitle:(id)a0 message:(id)a1;

@end
