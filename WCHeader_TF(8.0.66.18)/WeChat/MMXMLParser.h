@class NSArray, NSMutableString, NSString, NSMutableArray;

@interface MMXMLParser : NSObject <NSXMLParserDelegate>

@property (retain, nonatomic) NSMutableArray *dictionaryStack;
@property (retain, nonatomic) NSMutableString *textInProgress;
@property (retain, nonatomic) NSMutableString *xml;
@property (nonatomic) BOOL attributesAsStandaloneDic;
@property (nonatomic) BOOL lowercaseMode;
@property (retain, nonatomic) NSArray *yymodelCustomContainerElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryWithXMLData:(id)a0;
+ (id)dictionaryWithXMLString:(id)a0;
+ (id)xmlWithDic:(id)a0;
+ (id)xmlWithDic:(id)a0 lowercaseMode:(BOOL)a1;

- (id)init;
- (id)dictionaryWithData:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (id)xmlWithDic:(id)a0;
- (void)dfsVisitObject:(id)a0 key:(id)a1;
- (BOOL)isArrayOrDic:(id)a0;
- (void).cxx_destruct;

@end
