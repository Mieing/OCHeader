@class NSString;

@interface SVGKParserSVG : NSObject <SVGKParserExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedNamespaces;
- (id)supportedTags;
- (id)handleStartElement:(id)a0 document:(id)a1 namePrefix:(id)a2 namespaceURI:(id)a3 attributes:(id)a4 parseResult:(id)a5 parentNode:(id)a6;
- (void)handleEndElement:(id)a0 document:(id)a1 parseResult:(id)a2;
- (id)init;

@end
