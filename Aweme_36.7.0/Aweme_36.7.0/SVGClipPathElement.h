@class NSString, CSSStyleDeclaration;

@interface SVGClipPathElement : SVGElement <SVGTransformable, SVGStylable>

@property (readonly, nonatomic) int clipPathUnits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) CSSStyleDeclaration *style;

- (void)layoutLayer:(id)a0 toMaskLayer:(id)a1;
- (void)postProcessAttributesAddingErrorsTo:(id)a0;
- (id)newLayer;

@end
