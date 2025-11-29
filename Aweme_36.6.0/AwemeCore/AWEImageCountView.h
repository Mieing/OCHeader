@class UIImageView, UILabel, UIView;

@interface AWEImageCountView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long imageCount;

- (void)setUpImageCountView:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withImageCount:(long long)a1;
- (void)updateImageCountView:(long long)a0;
- (void).cxx_destruct;

@end
