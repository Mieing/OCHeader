@class UIImageView, UIScrollView, UITapGestureRecognizer;

@interface IESLivePcPadHelpView : UIView

@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UIScrollView *scroll;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) unsigned long long theme;
@property (nonatomic) BOOL stickyAtBottom;
@property (nonatomic) long long type;
@property (nonatomic) BOOL show;
@property (copy, nonatomic) id /* block */ selectBlock;

- (void)buildNewHeaderView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 theme:(unsigned long long)a1 type:(long long)a2;
- (void)animToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hideAfterAnim:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupViews;
- (void)didTap;

@end
