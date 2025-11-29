@class UILabel, AWEUIButton, UIView;

@interface AWEUselessIAPAlertView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) AWEUIButton *closeBtn;
@property (retain, nonatomic) AWEUIButton *confirmBtn;
@property (retain, nonatomic) UIView *btnsTopDividedLine;
@property (retain, nonatomic) UIView *btnsMiddleDividedLine;

- (void)showInWindow;
- (void)loadSubviews;
- (void)selectBtnAction:(id)a0;
- (void)confirmBtnAction;
- (void)closeBtnAction;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
