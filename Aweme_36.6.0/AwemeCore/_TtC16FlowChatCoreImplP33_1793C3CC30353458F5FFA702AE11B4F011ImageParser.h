@interface _TtC16FlowChatCoreImplP33_1793C3CC30353458F5FFA702AE11B4F011ImageParser : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ imageList;
    void /* unknown type, empty encoding */ stack;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;

@end
