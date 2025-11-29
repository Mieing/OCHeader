@class UIView;

@interface EditImageColorSquareBarButton : UIButton

@property (retain, nonatomic) UIView *backColorView;
@property (retain, nonatomic) UIView *frontColorView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (double)backSize;
- (double)frontSize;
- (void)setColor:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
