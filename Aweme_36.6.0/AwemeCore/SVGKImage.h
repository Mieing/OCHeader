@class SVGSVGElement, NSString, UIImage, SVGKSource, SVGDocument, SVGKParseResult, CALayer;

@interface SVGKImage : NSObject {
    BOOL cameFromGlobalCache;
}

@property (nonatomic) struct CGSize { double width; double height; } internalSizeThatWasSetExplicitlyByUser;
@property (retain, nonatomic) SVGKParseResult *parseErrorsAndWarnings;
@property (retain, nonatomic) SVGKSource *source;
@property (retain, nonatomic) SVGDocument *DOMDocument;
@property (retain, nonatomic) SVGSVGElement *DOMTree;
@property (retain, nonatomic) CALayer *CALayerTree;
@property (retain, nonatomic) NSString *nameUsedToInstantiate;
@property (readonly, weak, nonatomic) UIImage *UIImage;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double scale;

+ (void)didReceiveMemoryWarningOrBackgroundNotification:(id)a0;
+ (id)imageWithSource:(id)a0 onCompletion:(id /* block */)a1;
+ (id)imageWithSource:(id)a0;
+ (id)imageWithContentsOfURL:(id)a0;
+ (void)initialize;
+ (id)imageWithContentsOfFile:(id)a0;

- (BOOL)isElementVisible:(id)a0;
- (struct CGContext { } *)newCGContextAutosizedToFit;
- (void)renderToContext:(struct CGContext { } *)a0 antiAliased:(BOOL)a1 curveFlatnessFactor:(double)a2 interpolationQuality:(int)a3 flipYaxis:(BOOL)a4;
- (id)initWithParsedSVG:(id)a0 fromSource:(id)a1;
- (id)layerWithIdentifier:(id)a0 layer:(id)a1;
- (id)newCopyPositionedAbsoluteOfLayer:(id)a0;
- (id)newCopyPositionedAbsoluteOfLayer:(id)a0 withSubLayers:(BOOL)a1;
- (id)newLayerWithElement:(id)a0;
- (id)newCALayerTree;
- (void)addSVGLayerTree:(id)a0 withIdentifier:(id)a1 toDictionary:(id)a2;
- (id)newCopyPositionedAbsoluteLayerWithIdentifier:(id)a0;
- (id)dictionaryOfLayers;
- (void)scaleToFitInside:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)hasSize;
- (void)dealloc;
- (id)layerWithIdentifier:(id)a0;

@end
