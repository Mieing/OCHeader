@interface SVGHelperUtilities : NSObject

+ (id)newCALayerForPathBasedSVGElement:(id)a0 withPath:(struct CGPath { } *)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformAbsoluteIncludingViewportForTransformableOrViewportEstablishingElement:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformRelativeIncludingViewportForTransformableOrViewportEstablishingElement:(id)a0;
+ (struct CGColor { } *)parseFillForElement:(id)a0 fromFill:(id)a1 andOpacity:(id)a2;
+ (struct CGColor { } *)parseFillForElement:(id)a0;
+ (void)parsePreserveAspectRatioFor:(id)a0;
+ (void)configureCALayer:(id)a0 usingElement:(id)a1;

@end
