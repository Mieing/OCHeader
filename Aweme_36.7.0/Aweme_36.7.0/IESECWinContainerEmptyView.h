@class UILabel, UIButton, UIImageView;

@interface IESECWinContainerEmptyView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *tapButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;
- (void)buttonTapped;

@end
