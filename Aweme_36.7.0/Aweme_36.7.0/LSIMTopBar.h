@class UIImageView, UILabel, UIView, UIButton;

@interface LSIMTopBar : UIView

@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *readButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)closeClick;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)readClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
