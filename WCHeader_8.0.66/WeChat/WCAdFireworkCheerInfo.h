@class NSString, WCAdFireworkCheerGuideHalfScreenInfo, WCAdPagInfo, WCAdFireworkCheerTopLikeAreaInfo, WCAdColorInfo, WCAdFireworkCheerTagInfo;

@interface WCAdFireworkCheerInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) WCAdColorInfo *likedColor;
@property (retain, nonatomic) WCAdColorInfo *likeButtonBgColor;
@property (retain, nonatomic) WCAdColorInfo *likeButtonBgHighlightedColor;
@property (retain, nonatomic) NSString *fireworkNormalIcon;
@property (retain, nonatomic) NSString *fireworkNormalIconDark;
@property (retain, nonatomic) NSString *fireworkLikedIcon;
@property (retain, nonatomic) NSString *fireworkLikedIconDark;
@property (retain, nonatomic) WCAdPagInfo *fireworkIconPag;
@property (nonatomic) double attractDelayTime;
@property (retain, nonatomic) WCAdPagInfo *attractPag;
@property (nonatomic) double vibrateDelayTime;
@property (nonatomic) double refreshTime;
@property (retain, nonatomic) NSString *commentDescHint;
@property (retain, nonatomic) WCAdPagInfo *fullScreenPag;
@property (nonatomic) double fullScreenCanCloseDelayTime;
@property (retain, nonatomic) WCAdFireworkCheerTopLikeAreaInfo *topLikeAreaInfo;
@property (retain, nonatomic) NSString *bottomButtonTitle;
@property (retain, nonatomic) WCAdFireworkCheerTagInfo *tagInfo;
@property (retain, nonatomic) WCAdFireworkCheerGuideHalfScreenInfo *guideHalfScreenInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)fetchFireworkNormalIcon;
- (id)fetchFireworkNormalIconEscapingForXML;
- (id)fetchFireworkLikedIcon;
- (id)fetchFireworkLikedIconEscapingForXML;
- (id)fetchLikedColor;
- (id)fetchLikedColorHexValue;
- (id)fetchLikeButtonBgColor;
- (id)fetchLikeButtonBgHighlightedColor;
- (void).cxx_destruct;

@end
