@class UIImageView, UILabel;

@interface AWEHotSearchCommentActionButton : UIControl

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isAnimating;

- (void)configIsSelected:(BOOL)a0;
- (void)toggleSelected:(BOOL)a0 needAnimate:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
