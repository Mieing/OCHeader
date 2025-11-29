@class NSString;

@interface WCMultiLanguageItem : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *zh;
@property (retain, nonatomic) NSString *tw;
@property (retain, nonatomic) NSString *en;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)currentLanguageText;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
