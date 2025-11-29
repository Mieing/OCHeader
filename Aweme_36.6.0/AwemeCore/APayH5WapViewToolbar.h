@class UIImageView, UIButton;

@interface APayH5WapViewToolbar : UIView

@property (copy, nonatomic) id /* block */ shutDownBlock;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIButton *refreshButton;
@property (retain, nonatomic) UIButton *shutDownButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bundleName:(id)a1;
- (void)setShutDown:(id /* block */)a0 refresh:(id /* block */)a1;
- (void).cxx_destruct;
- (void)shutDown:(id)a0;
- (void)layoutSubviews;
- (id)imageNamed:(id)a0 inBundle:(id)a1;
- (void)refresh:(id)a0;

@end
