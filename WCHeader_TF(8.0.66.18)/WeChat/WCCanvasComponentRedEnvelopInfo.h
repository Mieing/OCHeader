@class NSString, NSMutableDictionary, WCCanvasComponentItem;

@interface WCCanvasComponentRedEnvelopInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *hbImgUrl;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) NSString *shareThumbUrl;
@property (retain, nonatomic) NSString *btnTxtColor;
@property (nonatomic) double btnTxtColorAlpha;
@property (retain, nonatomic) NSString *btnBgColor;
@property (nonatomic) double btnBgColorAlpha;
@property (nonatomic) double btnCornerRadius;
@property (retain, nonatomic) WCCanvasComponentItem *videoItem;
@property (retain, nonatomic) NSString *inviteLinkTxt;
@property (retain, nonatomic) NSString *inviteLinkTxtColor;
@property (nonatomic) double inviteLinkTxtColorAlpha;
@property (retain, nonatomic) NSMutableDictionary *subCardsInfo;
@property (retain, nonatomic) NSString *cardDynamicInfo;
@property (nonatomic) int theChosenSubtype;
@property (retain, nonatomic) NSString *giveCardId;
@property (retain, nonatomic) NSString *receiveUrl;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
