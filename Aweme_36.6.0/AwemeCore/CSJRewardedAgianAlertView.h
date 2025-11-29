@class UIImageView, UILabel, UIView, UIButton;

@interface CSJRewardedAgianAlertView : UIView

@property (copy, nonatomic) id /* block */ confirm;
@property (copy, nonatomic) id /* block */ cancel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImg;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *anotherBtn;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ anotherBlk;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confirm:(id /* block */)a1 cancel:(id /* block */)a2 style:(long long)a3;
- (void)updateTextOfMessage:(id)a0;
- (void)clickConfirmBtn;
- (void)clickCancelBtn;
- (void)clickAnotherBtn;
- (void)creatSubViews;
- (void)disappear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confirm:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)updateTextOfTitle:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showInView:(id)a0;

@end
