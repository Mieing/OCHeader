@class UILabel, AWEUIButton, UIView;

@interface AWEAwemeOfflineGuideAlterView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEUIButton *agreeButton;
@property (retain, nonatomic) AWEUIButton *disagreeButton;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)agreeButtonClicked;
- (void)disagreeButtonClicked;
- (void)showAlertWithConfirm:(id /* block */)a0 cancel:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)dismissViewWithCompletion:(id /* block */)a0;

@end
