@class NSString, WCAdCardBtnInfo;

@interface WCAdContinuousLikeTagInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *numberRequestId;
@property (retain, nonatomic) NSString *numberDefaultTitle;
@property (retain, nonatomic) NSString *numberDesc;
@property (retain, nonatomic) NSString *numberCurrentTitle;
@property (retain, nonatomic) NSString *continuousLikeTitle;
@property (retain, nonatomic) NSString *continuousLikeTitleColorLight;
@property (retain, nonatomic) NSString *continuousLikeTitleColorDark;
@property (retain, nonatomic) NSString *jumpLinkTitle;
@property (retain, nonatomic) NSString *jumpLinkIconLight;
@property (retain, nonatomic) NSString *jumpLinkIconDark;
@property (retain, nonatomic) WCAdCardBtnInfo *jumpLinkActionInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)fetchContinuousLikeTitleColor;
- (id)fetchJumpLinkIconUrl;
- (void).cxx_destruct;

@end
