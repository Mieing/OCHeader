@class IESLiveStackManager, NSMutableDictionary, IESLiveStackXMLNode, NSData, NSError, NSString, NSXMLParser;

@interface IESLiveStackDSLParser : NSObject <NSXMLParserDelegate>

@property (retain, nonatomic) NSXMLParser *parser;
@property (retain, nonatomic) NSError *parserError;
@property (retain, nonatomic) IESLiveStackManager *stackManager;
@property (retain, nonatomic) IESLiveStackXMLNode *rootNode;
@property (weak, nonatomic) IESLiveStackXMLNode *cursorNode;
@property (retain, nonatomic) NSMutableDictionary *ruleMapping;
@property (retain, nonatomic) NSData *xmlData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFilePath:(id)a0 parserOperation:(id /* block */)a1;

- (void)didSetAttachingDIContext;
- (void)traceParseResultWithSourceName:(id)a0 error:(id)a1;
- (void)attachRule:(id)a0 forContainerIdentifier:(id)a1;
- (id)ruleForContainer:(id)a0;
- (id)buildStackManager;
- (void).cxx_destruct;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)reset;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (id)parse:(id *)a0;
- (id)initWithXMLData:(id)a0;

@end
