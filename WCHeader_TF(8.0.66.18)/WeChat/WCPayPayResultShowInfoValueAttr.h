@class NSString;

@interface WCPayPayResultShowInfoValueAttr : NSObject

@property (nonatomic) unsigned long long link_type;
@property (retain, nonatomic) NSString *link_weapp;
@property (retain, nonatomic) NSString *link_addr;
@property (retain, nonatomic) NSString *link_url;
@property (nonatomic) unsigned long long text_attr;

+ (id)GenFromDictionary:(id)a0;
+ (id)genFromXml:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithDic:(id)a0;
- (id)readChildText:(const char *)a0 inNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
- (void).cxx_destruct;

@end
