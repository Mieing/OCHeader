@class UIImageView, UIImage;

@interface IESLiveVSPauseTriangle : UIView

@property (retain, nonatomic) UIImageView *image;
@property (retain, nonatomic) UIImage *skinImage;
@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) id /* block */ triangleAnimationCompletionBlock;

- (void)updateIsLandscape:(BOOL)a0;
- (void)applyAccessibility;
- (void)hideWith:(double)a0 time:(double)a1;
- (void)showWith:(double)a0 time:(double)a1;
- (void)setupImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTriangleImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
