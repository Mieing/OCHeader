@class SVGLength, NSString, SVGViewSpec, SVGKSource, StyleSheetList, SVGAnimatedPreserveAspectRatio;

@interface SVGSVGElement : SVGElement <DocumentCSS, SVGFitToViewBox, ConverterSVGToCALayer>

@property (nonatomic) struct { float x; float y; float width; float height; } requestedViewport;
@property (retain, nonatomic) SVGLength *x;
@property (retain, nonatomic) SVGLength *y;
@property (retain, nonatomic) SVGLength *width;
@property (retain, nonatomic) SVGLength *height;
@property (retain, nonatomic) NSString *contentScriptType;
@property (retain, nonatomic) NSString *contentStyleType;
@property (nonatomic) struct { float x; float y; float width; float height; } viewport;
@property (nonatomic) float pixelUnitToMillimeterX;
@property (nonatomic) float pixelUnitToMillimeterY;
@property (nonatomic) float screenPixelToMillimeterX;
@property (nonatomic) float screenPixelToMillimeterY;
@property (nonatomic) BOOL useCurrentView;
@property (retain, nonatomic) SVGViewSpec *currentView;
@property (nonatomic) float currentScale;
@property (retain, nonatomic) SVGKSource *source;
@property (readonly) double aspectRatioFromWidthPerHeight;
@property (readonly) double aspectRatioFromViewBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) StyleSheetList *styleSheets;
@property (nonatomic) struct { float x; float y; float width; float height; } viewBox;
@property (retain, nonatomic) SVGAnimatedPreserveAspectRatio *preserveAspectRatio;

- (void)layoutLayer:(id)a0;
- (void)postProcessAttributesAddingErrorsTo:(id)a0;
- (id)getOverrideStyle:(id)a0 pseudoElt:(id)a1;
- (id)createSVGLength;
- (struct { float x0; float x1; float x2; float x3; })createSVGRect;
- (id)findFirstElementOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadDefaults;
- (id)getElementById:(id)a0;
- (id)newLayer;

@end
