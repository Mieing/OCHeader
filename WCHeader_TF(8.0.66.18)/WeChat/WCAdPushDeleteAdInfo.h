@class NSString;

@interface WCAdPushDeleteAdInfo : NSObject <WCAdParserProtocol>

@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) long long deleteLevel;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
