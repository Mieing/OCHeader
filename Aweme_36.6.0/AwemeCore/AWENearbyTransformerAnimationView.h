@class UIImageView, NSMutableArray;

@interface AWENearbyTransformerAnimationView : UIView

@property (nonatomic) double topInset;
@property (retain, nonatomic) UIImageView *textImageView;
@property (retain, nonatomic) NSMutableArray *iconImageViews;
@property (nonatomic) double textImageOriginY;
@property (nonatomic) double iconImageOriginY;

- (void)__buildUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topInset:(double)a1;
- (void)beginIconAnimationWithRelativeHeight:(double)a0 seconIconCompletion:(id /* block */)a1 completion:(id /* block */)a2;
- (void)beginAnimationWithCompletion:(id /* block */)a0;
- (void)__setUpDefaultConstraints;
- (void).cxx_destruct;

@end
