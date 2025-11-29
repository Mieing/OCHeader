@class NSString;

@interface WCCanvasComponentShareInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *shareText;
@property (retain, nonatomic) NSString *fontColor;
@property (nonatomic) long long shareActionType;
@property (nonatomic) BOOL reportClickEventByOwner;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
