@class NSString, WCAdColorInfo, WCAdCardBtnInfo;

@interface WCAdConsultBarInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) WCAdColorInfo *titleColor;
@property (copy, nonatomic) NSString *consultText;
@property (retain, nonatomic) WCAdColorInfo *consultTextColor;
@property (copy, nonatomic) NSString *iconDark;
@property (copy, nonatomic) NSString *iconLight;
@property (retain, nonatomic) WCAdCardBtnInfo *titleJumpActionInfo;
@property (retain, nonatomic) WCAdCardBtnInfo *consultButtonJumpActionInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)fetchTitleColor;
- (id)fetchConsultTextColor;
- (void).cxx_destruct;

@end
