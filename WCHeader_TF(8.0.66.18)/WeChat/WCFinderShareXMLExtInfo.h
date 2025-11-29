@class NSString;

@interface WCFinderShareXMLExtInfo : NSObject

@property (nonatomic) BOOL hasSet;
@property (nonatomic) BOOL hasInput;
@property (copy, nonatomic) NSString *tabContextId;
@property (copy, nonatomic) NSString *contextId;
@property (nonatomic) unsigned long long shareSrcScene;

- (id)reportString;
- (void)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void).cxx_destruct;

@end
