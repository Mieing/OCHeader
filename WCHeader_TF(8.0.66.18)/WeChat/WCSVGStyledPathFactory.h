@class NSMutableArray;
@protocol WCSVGStyledPathFactoryDelegate;

@interface WCSVGStyledPathFactory : NSObject

@property (retain, nonatomic) NSMutableArray *gradients;
@property struct CGPoint { double x; double y; } previousCurveOperationControlPoint;
@property (retain, nonatomic) NSMutableArray *affineTransformStack;
@property (retain, nonatomic) NSMutableArray *groupAppearanceStack;
@property (weak, nonatomic) id<WCSVGStyledPathFactoryDelegate> delegate;

- (id)init;
- (id)styledPathFromElementName:(id)a0 attributes:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getViewboxFromAttributes:(id)a0;
- (id)lineWithAttributes:(id)a0;
- (id)rectWithAttributes:(id)a0;
- (id)ellipseWithAttributes:(id)a0;
- (id)circleWithAttributes:(id)a0;
- (id)polyWithAttributes:(id)a0 closed:(BOOL)a1;
- (id)pathWithAttributes:(id)a0;
- (id)createStyledPath:(id)a0 withAttributes:(id)a1;
- (id)applyStrokeAttributes:(id)a0 toPath:(id)a1;
- (id)attributesByAddingGroupAttributesToAttributes:(id)a0;
- (id)attributesByApplyingStyleAttributeToAttributes:(id)a0;
- (id)commandListForCommandString:(id)a0;
- (id)commandListForPolylineString:(id)a0;
- (id)bezierPathFromCommandList:(id)a0;
- (void)addMoveToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)addLineToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)addHorizontalLineToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)addVerticalLineToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)addCurveToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)addSmoothCurveToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)addQuadCurveToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)addSmoothQuadCurveToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)addEllipticalArcToPointFromCommandScanner:(id)a0 toPath:(id)a1;
- (void)pushGroupTransformWithAttributes:(id)a0;
- (void)popGroupTransform;
- (void)pushGroupAppearanceWithAttributes:(id)a0;
- (void)popGroupAppearance;
- (void).cxx_destruct;

@end
