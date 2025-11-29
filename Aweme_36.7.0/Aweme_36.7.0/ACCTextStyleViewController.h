@class AWEStoryFontChooseView, UIView;

@interface ACCTextStyleViewController : UIView

@property (retain, nonatomic) AWEStoryFontChooseView *fontChooseView;
@property (retain, nonatomic) UIView *contentView;

- (void)setDidSelectedFontBlock:(id /* block */)a0;
- (void)resetViewWithHeight:(double)a0;
- (void)clearSelectFont;
- (void)selectWithFontId:(id)a0;
- (void)resetContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
