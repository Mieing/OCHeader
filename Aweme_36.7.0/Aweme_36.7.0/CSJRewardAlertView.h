@class UIWindow, UIImageView, UILabel, UIView, UIButton;

@interface CSJRewardAlertView : UIView

@property (copy, nonatomic) id /* block */ confirm;
@property (copy, nonatomic) id /* block */ cancel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImg;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIWindow *bgWindow;
@property (nonatomic) BOOL didRemoveSKOverlay;

- (void)clickConfirmBtn;
- (void)clickCancelBtn;
- (void)showInWindow;
- (void)updateTextOfConfirm:(id)a0;
- (void)updateTextOfCancel:(id)a0;
- (void)creatSubViews;
- (void)disappear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confirm:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)updateTextOfTitle:(id)a0;
- (void).cxx_destruct;
- (void)showInView:(id)a0;
- (void)updateWithStyle:(id)a0;

@end
