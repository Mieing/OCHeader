@class UILabel, UIButton, UIView;

@interface AWEBatManChangeHUDView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *changeButton;
@property (retain, nonatomic) UIView *bottomBar;
@property (copy, nonatomic) id /* block */ changeActionBlock;

- (void)changeAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
