@class NSString, WCAdCardBtnInfo;

@interface WCAdBrandSingleTopicInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *topicUrl;
@property (retain, nonatomic) NSString *topicUrlDark;
@property (nonatomic) double topicWidth;
@property (nonatomic) double topicHeight;
@property (retain, nonatomic) NSString *bottomImageUrl;
@property (retain, nonatomic) NSString *bottomImageUrlDark;
@property (nonatomic) double bottomImageWidth;
@property (nonatomic) double bottomImageHeight;
@property (retain, nonatomic) WCAdCardBtnInfo *clickActionInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
