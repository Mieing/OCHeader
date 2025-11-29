@interface HTSLiveAmazingBackgroundView : UIView

@property (nonatomic) unsigned long long corner;
@property (nonatomic) struct CGSize { double width; double height; } cornerRadii;
@property (nonatomic) BOOL hasCorner;

+ (Class)layerClass;

- (void)applyCorner:(unsigned long long)a0 radii:(struct CGSize { double x0; double x1; })a1;
- (id)gradientLayer;
- (void)layoutSubviews;

@end
