@class UILabel, AWEButton, UIView;

@interface AWEDouPlusContainerNavigationBar : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEButton *leftBtn;
@property (retain, nonatomic) AWEButton *rightBtn;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) long long backType;
@property (nonatomic) long long barType;
@property (copy, nonatomic) id /* block */ leftActionBlock;
@property (copy, nonatomic) id /* block */ rightActionBlock;

+ (id)navigationBarWithType:(long long)a0;

- (void)onLeftBtnAction;
- (void)onRightBtnAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
