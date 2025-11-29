@class UILabel, UIButton;

@interface AWESearchFullPageVerticalTitleBar : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *returnButton;
@property (copy, nonatomic) id /* block */ didClickReturnButtonBlock;

- (void)configUI;
- (void)updateTitleLabel:(id)a0;
- (void)returnButtonClicked;
- (void)changeTitleBarWithTheme:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
