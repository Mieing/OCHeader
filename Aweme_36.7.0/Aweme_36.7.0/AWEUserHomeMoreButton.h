@class UIImageView, DUXBadge;

@interface AWEUserHomeMoreButton : UIButton

@property (retain, nonatomic) UIImageView *darkImgView;
@property (retain, nonatomic) DUXBadge *dotView;

+ (id)redPointColor;

- (void)updateAlpha:(double)a0;
- (void)updateImage:(id)a0;
- (void)setHasNew:(BOOL)a0;
- (BOOL)isLightMode;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear;
- (void)layoutSubviews;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
