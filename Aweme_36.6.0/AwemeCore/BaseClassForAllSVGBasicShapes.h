@class NSString, CSSStyleDeclaration;

@interface BaseClassForAllSVGBasicShapes : SVGElement <SVGStylable, SVGTransformable, ConverterSVGToCALayer> {
    NSString *_styleClass;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layerRect;
}

@property (nonatomic) struct CGPath { } *pathForShapeInRelativeCoords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) CSSStyleDeclaration *style;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (void)layoutLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)newLayer;

@end
