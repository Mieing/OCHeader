@class NSString, NSMutableString, NSError, NSMutableArray;

@interface WAMediaCastingXMLReader : NSObject <NSXMLParserDelegate>

@property (retain, nonatomic) NSMutableArray *dictionaryStack;
@property (retain, nonatomic) NSMutableString *textInProgress;
@property (retain, nonatomic) NSError *errorPointer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryForXMLData:(id)a0 error:(id *)a1;
+ (id)dictionaryForXMLString:(id)a0 error:(id *)a1;
+ (id)dictionaryForXMLData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)dictionaryForXMLString:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

- (id)initWithError:(id *)a0;
- (id)objectWithData:(id)a0 options:(unsigned long long)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void).cxx_destruct;

@end
