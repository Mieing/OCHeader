@class NSString, SVGSVGElement;

@interface SVGDocument : Document

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *referrer;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *URL;
@property (retain, nonatomic) SVGSVGElement *rootElement;

+ (void)accumulateNamespacesForNode:(id)a0 intoDictionary:(id)a1;

- (id)allPrefixesByNamespace;
- (id)allPrefixesByNamespaceNormalized;
- (void).cxx_destruct;
- (id)init;
- (void)setDocumentElement:(id)a0;

@end
