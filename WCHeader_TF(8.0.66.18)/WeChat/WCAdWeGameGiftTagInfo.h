@class NSString, WCAdCardBtnInfo;

@interface WCAdWeGameGiftTagInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *descText;
@property (retain, nonatomic) NSString *clickText;
@property (retain, nonatomic) NSString *clickTextColor;
@property (retain, nonatomic) NSString *clickTextColorDark;
@property (retain, nonatomic) NSString *clickIconLight;
@property (retain, nonatomic) NSString *clickIconDark;
@property (retain, nonatomic) WCAdCardBtnInfo *clickActionInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
