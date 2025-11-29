@class UIImageView, CJPayStyleErrorLabel;

@interface CJPayNotSufficientFundsView : UIView

@property (retain, nonatomic) CJPayStyleErrorLabel *contentLabel;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (copy, nonatomic) id /* block */ iconClickBlock;

- (struct CGSize { double x0; double x1; })calSize;
- (void)p_tapIncomePayAboutImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end
