@class UIButton, UILabel, UIView;

@interface AWEFilterTabSelectView : UIView

@property (retain, nonatomic) UIButton *filterBtn;
@property (retain, nonatomic) UIButton *adjustBtn;
@property (retain, nonatomic) UIView *bottomLine;
@property (copy, nonatomic) id /* block */ changedBlk;
@property (retain, nonatomic) UILabel *newTipsLabel;
@property (nonatomic) long long currentType;

- (void)didClick:(id)a0;
- (void)selectType:(long long)a0;
- (void)didChanged:(id /* block */)a0;
- (void)showAdjustNewTipsIfNeeded;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
