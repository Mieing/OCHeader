@class NSString;

@interface WCCanvasRandomLayoutEncoreInfo : MMObject <NSCoding>

@property (nonatomic) int encoreType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic) double triggerGForce;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
