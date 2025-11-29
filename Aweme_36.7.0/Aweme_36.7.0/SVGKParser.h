@class Node, NSString, NSMutableDictionary, SVGKSource, SVGKParseResult, NSMutableArray, NSMutableString;

@interface SVGKParser : NSObject {
    NSMutableString *_storedChars;
    NSMutableArray *_stackOfParserExtensions;
    Node *_parentOfCurrentNode;
}

@property (retain, nonatomic) SVGKSource *source;
@property (retain, nonatomic) NSMutableArray *externalStylesheets;
@property (retain, nonatomic) SVGKParseResult *currentParseRun;
@property (retain, nonatomic) NSString *defaultXMLNamespaceForThisParseRun;
@property (nonatomic) BOOL hasCancelBeenRequested;
@property (retain, nonatomic) NSMutableArray *parserExtensions;
@property (retain, nonatomic) NSMutableDictionary *parserKnownNamespaces;

+ (id)NSDictionaryFromCSSAttributes:(id)a0;
+ (id)newParserWithDefaultSVGKParserExtensions:(id)a0;
+ (void)cancelParser:(id)a0;
+ (id)parseSourceUsingDefaultSVGKParser:(id)a0;

- (void)addDefaultSVGParserExtensions;
- (id)parseSynchronously;
- (void)addParserExtension:(id)a0;
- (id)loadCSSFrom:(id)a0;
- (id)stringFromSource:(id)a0;
- (void)addExternalStylesheetsToRootElement;
- (void)handleProcessingInstruction:(id)a0 withData:(id)a1;
- (void)handleStartElement:(id)a0 namePrefix:(id)a1 namespaceURI:(id)a2 attributeObjects:(id)a3;
- (void)handleEndElement:(id)a0;
- (void)handleFoundCharacters:(const char *)a0 length:(int)a1;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;

@end
