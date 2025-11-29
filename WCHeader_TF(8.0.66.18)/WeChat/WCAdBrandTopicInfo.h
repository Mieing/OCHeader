@class NSString, NSArray;

@interface WCAdBrandTopicInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double containerCornerRadius;
@property (retain, nonatomic) NSString *brandPreludeUrl;
@property (retain, nonatomic) NSString *brandPreludeUrlDark;
@property (nonatomic) double brandPreludeWidth;
@property (nonatomic) double brandPreludeHeight;
@property (nonatomic) unsigned long long brandPreludeAnimDelayTime;
@property (retain, nonatomic) NSArray *topicInfoList;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
