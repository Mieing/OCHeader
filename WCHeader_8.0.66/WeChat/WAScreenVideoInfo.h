@class NSString;

@interface WAScreenVideoInfo : MMObject

@property (copy, nonatomic) NSString *videobuttontext;
@property (copy, nonatomic) NSString *videomd5;
@property (copy, nonatomic) NSString *videoremoteurl;
@property (copy, nonatomic) NSString *videothumburl;
@property (copy, nonatomic) NSString *videoplaydesc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
