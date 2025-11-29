@class NSString;

@interface WCAdHeadLivingInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *finderLiveId;
@property (nonatomic) int liveStatus;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
