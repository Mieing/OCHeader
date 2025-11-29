@class UIImageView, UIButton, UILabel;

@interface CSJDislikeHeaderViewForTwo : UIView

@property (retain, nonatomic) UIImageView *backImg;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLable;
@property (copy, nonatomic) id /* block */ dislikeBack;

- (void)tapBack;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
