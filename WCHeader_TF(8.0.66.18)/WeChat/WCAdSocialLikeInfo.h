@class NSString, WCAdSocialLikeAttractingInfo, WCAdFireworkCheerInfo, WCMultiLanguageItem, WCAdSocialLikePatInfo, WCAdContinuousLikeInfo;

@interface WCAdSocialLikeInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) WCMultiLanguageItem *cheerText;
@property (retain, nonatomic) WCMultiLanguageItem *cheerFinishText;
@property (retain, nonatomic) WCMultiLanguageItem *commentText;
@property (nonatomic) BOOL notShowPag;
@property (retain, nonatomic) NSString *cheerIcon;
@property (retain, nonatomic) NSString *cheerIconDark;
@property (retain, nonatomic) NSString *likedIcon;
@property (retain, nonatomic) NSString *likedIconDark;
@property (retain, nonatomic) NSString *pagAnimationUrl;
@property (retain, nonatomic) NSString *pagAnimationMD5;
@property (retain, nonatomic) WCAdSocialLikeAttractingInfo *attractingInfo;
@property (retain, nonatomic) WCAdContinuousLikeInfo *continuousLikeInfo;
@property (retain, nonatomic) WCAdFireworkCheerInfo *fireworkCheerInfo;
@property (retain, nonatomic) WCAdSocialLikePatInfo *patInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)fetchCheerIcon;
- (id)fetchCheerIconEscapingForXML;
- (void).cxx_destruct;

@end
