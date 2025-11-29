@interface IESECShopAddToCartAnimationHelper : NSObject

+ (void)addToCartAnimationOnViewController:(id)a0 withStartPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 animationSpeed:(double)a3 redPointRadius:(double)a4 scaleSize:(double)a5 endOpacity:(double)a6 completion:(id /* block */)a7;
+ (struct CGPoint { double x0; double x1; })p_calculateControlPointWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
+ (void)addToCartAnimationOnViewController:(id)a0 withStartPoint:(struct CGPoint { double x0; double x1; })a1 endPoing:(struct CGPoint { double x0; double x1; })a2;
+ (void)animateAddToCartOnView:(id)a0 image:(id)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 toCenterPoint:(struct CGPoint { double x0; double x1; })a3 cartAnimationBlock:(id /* block */)a4;

@end
