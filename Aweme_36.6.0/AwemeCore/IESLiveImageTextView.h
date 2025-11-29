@class UIImageView, UILabel, UIButton;

@interface IESLiveImageTextView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ tapBlock;

+ (id)initWithConfigBlock:(id /* block */)a0;

- (void)buttonClicked;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
