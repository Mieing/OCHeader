@class NSString, UILabel, UIView, UIButton;

@interface AWEDeliveryNavigationBar : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *rightSecondButton;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (copy, nonatomic) id /* block */ leftAction;
@property (copy, nonatomic) id /* block */ rightAction;
@property (copy, nonatomic) id /* block */ rightSecondAction;

- (void)leftButtonClicked;
- (void)rightButtonClicked;
- (void)rightSecondButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
