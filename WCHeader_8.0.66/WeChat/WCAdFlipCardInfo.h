@class NSArray, WCMediaItem, NSString, WCAdCardBtnInfo;

@interface WCAdFlipCardInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) WCMediaItem *frontTopMedia;
@property (retain, nonatomic) WCMediaItem *frontMiddleMedia;
@property (retain, nonatomic) WCMediaItem *frontBottomMedia;
@property (retain, nonatomic) WCMediaItem *backTopMedia;
@property (retain, nonatomic) WCMediaItem *backMiddleMedia;
@property (retain, nonatomic) WCMediaItem *backBottomMedia;
@property (retain, nonatomic) NSArray *frontMiddleMediaCardHoles;
@property (retain, nonatomic) NSArray *backMiddleMediaCardHoles;
@property (nonatomic) double mediaOffsetFactor;
@property (retain, nonatomic) WCAdCardBtnInfo *mediaClickActionInfo;
@property (retain, nonatomic) NSString *backTitleWording;
@property (retain, nonatomic) NSString *backSubTitleWording;
@property (retain, nonatomic) NSString *backLearnMoreWording;
@property (nonatomic) double backTVCAnimationDelayInterval;
@property (retain, nonatomic) WCAdCardBtnInfo *learnMoreClickActionInfo;
@property (nonatomic) double learnMoreDelayShowInterval;
@property (retain, nonatomic) NSString *flipIntroduceTitle;
@property (retain, nonatomic) NSString *flipIntroduceIcon;
@property (nonatomic) double flipIntroduceSwitchInterval;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)fetchMediaFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 childName:(const char *)a1;
+ (id)fetchCardHolesFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 childName:(const char *)a1;
+ (id)fetchCardHoleRectFromString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
