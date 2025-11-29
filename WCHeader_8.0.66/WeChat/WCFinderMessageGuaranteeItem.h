@class NSString;

@interface WCFinderMessageGuaranteeItem : MMObject

@property (class, readonly, nonatomic) NSString *xmlNodeName;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *relativePath;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *scene;

- (void)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
