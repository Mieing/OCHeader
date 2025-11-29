@class UIImageView;

@interface AWESearchTopBarAILogoElement : AWESearchTopBarBaseElement

@property (copy, nonatomic) UIImageView *iconView;

- (void)bindAction;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithDelegate:(id)a0 context:(id)a1;
- (void)tapAction;

@end
