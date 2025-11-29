@class NSString, NSMutableDictionary;

@interface WCCanvasComponentRedEnvelopSubCardInfo : MMObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) int subType;
@property (retain, nonatomic) NSString *headline;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *btnTitle;
@property (retain, nonatomic) NSString *btnTitleAfterAction;
@property (retain, nonatomic) NSString *btnTitleExpired;
@property (retain, nonatomic) NSString *btnTitleGetByOther;
@property (retain, nonatomic) NSString *decorationTitle;
@property (nonatomic) unsigned int expireTime;
@property (retain, nonatomic) NSMutableDictionary *subCardsInfo;

+ (id)parseSubCardsFromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
