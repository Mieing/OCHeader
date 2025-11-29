@class NSString, WCAdPagInfo, NSArray;

@interface WCAdSocialLikePatInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *numberRequestId;
@property (retain, nonatomic) WCAdPagInfo *cheerIconPag;
@property (retain, nonatomic) WCAdPagInfo *cheerIconPagDark;
@property (retain, nonatomic) NSArray *fullScreenPagList;
@property (nonatomic) double fullScreenCanCloseDelayTime;
@property (nonatomic) double fullScreenVibrateDelayTime;
@property (nonatomic) BOOL supportDoubleClick;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
