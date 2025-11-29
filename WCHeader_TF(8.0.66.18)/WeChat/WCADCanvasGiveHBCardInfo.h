@class NSString;

@interface WCADCanvasGiveHBCardInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *twistCardId;
@property (retain, nonatomic) NSString *giveCardId;
@property (nonatomic) int subCardType;
@property (retain, nonatomic) NSString *senderUserName;
@property (retain, nonatomic) NSString *senderNickName;
@property (nonatomic) unsigned int shareTime;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
