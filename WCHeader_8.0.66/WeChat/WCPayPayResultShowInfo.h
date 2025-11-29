@class NSString, WCPayPayResultShowInfoValueAttr;

@interface WCPayPayResultShowInfo : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) WCPayPayResultShowInfoValueAttr *value_attr;
@property (retain, nonatomic) NSString *name_color;
@property (retain, nonatomic) NSString *value_color;

+ (id)GenFromDictionary:(id)a0;
+ (id)genFromXml:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)genFromProto:(id)a0;

- (id)initWithDic:(id)a0;
- (id)readChildText:(const char *)a0 inNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
- (void).cxx_destruct;

@end
