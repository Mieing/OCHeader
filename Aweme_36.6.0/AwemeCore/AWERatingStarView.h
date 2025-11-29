@protocol AWERatingStartViewDelegate;

@interface AWERatingStarView : UIView

@property (nonatomic) double index;
@property (weak, nonatomic) id<AWERatingStartViewDelegate> delegate;

+ (id)createStarLayerWithImgae:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)createLayer:(struct CGSize { double x0; double x1; })a0;
+ (id)createStarWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 index:(double)a2;
+ (id)createStarWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 index:(double)a2 color:(id)a3 gridentLayer:(id)a4;
+ (id)createPartialStarWithFillPercentage:(double)a0 fullImage:(id)a1 emptyImage:(id)a2 size:(struct CGSize { double x0; double x1; })a3 index:(double)a4;

- (void)onTaped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1;
- (void).cxx_destruct;

@end
