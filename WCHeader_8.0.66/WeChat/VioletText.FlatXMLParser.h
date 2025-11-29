@interface VioletText.FlatXMLParser : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ parsingNode;
    void /* unknown type, empty encoding */ didParsedRoot;
    void /* unknown type, empty encoding */ attributesResolver;
}

- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
