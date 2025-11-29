@class UIImageView, UILabel;

@interface CJPayWithDrawResultMethodView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)setImageUrl:(id)a0 content:(id)a1;
- (void)setImage:(id)a0 content:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
