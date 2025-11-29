@class NSString, NSMutableDictionary;

@interface TTSvgXMLParsingDelegate : NSObject <NSXMLParserDelegate> {
    NSString *_elementName;
    NSString *_styleString;
}

@property (readonly, nonatomic) NSMutableDictionary *styles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;

@end
