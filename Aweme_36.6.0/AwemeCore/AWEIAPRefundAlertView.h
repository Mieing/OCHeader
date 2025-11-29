@class AWEUIButton, UILabel, UIView, UIButton;

@interface AWEIAPRefundAlertView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *selectBtn;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) AWEUIButton *cancelBtn;
@property (retain, nonatomic) AWEUIButton *confirmBtn;
@property (retain, nonatomic) UIView *btnsTopDividedLine;
@property (retain, nonatomic) UIView *btnsMiddleDividedLine;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (nonatomic) long long alertViewStyle;
@property (nonatomic) BOOL selectBtnDisable;
@property (nonatomic) BOOL cancleBtnDisable;

- (void)loadSubviews;
- (void)showText:(id)a0 confirmBlock:(id /* block */)a1 confirmText:(id)a2;
- (void)selectBtnAction:(id)a0;
- (void)cancelBtnAction;
- (void)confirmBtnAction;
- (void)updateSubviewsLayout;
- (void)dismissWithCompleteBlock:(id /* block */)a0;
- (void)showText:(id)a0 confirmBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
