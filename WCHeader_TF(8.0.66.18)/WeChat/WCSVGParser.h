@class WCSVGGradient, WCSVGStyledPathFactory, NSMutableDictionary, WCSVGCanvas, NSString, NSMutableArray, NSXMLParser;

@interface WCSVGParser : NSObject <WCSVGStyledPathFactoryDelegate, NSXMLParserDelegate>

@property (retain, nonatomic) NSXMLParser *xmlParser;
@property (retain, nonatomic) WCSVGStyledPathFactory *pathFactory;
@property (retain, nonatomic) NSMutableArray *currentCanvasStack;
@property (retain, nonatomic) NSMutableDictionary *maskCanvases;
@property unsigned long long groupLevel;
@property (retain, nonatomic) NSMutableDictionary *groupTransforms;
@property (retain, nonatomic) NSMutableDictionary *groupAppearances;
@property (nonatomic) BOOL isDefined;
@property (retain, nonatomic) NSMutableDictionary *gradients;
@property (retain, nonatomic) WCSVGGradient *currentGradient;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBox;
@property (retain, nonatomic) WCSVGCanvas *rootCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSVGDocument:(id)a0;
- (id)initWithSVGData:(id)a0;
- (BOOL)parseSVGDocument;
- (id)currentCanvas;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (id)gradientFromId:(id)a0;
- (void).cxx_destruct;

@end
