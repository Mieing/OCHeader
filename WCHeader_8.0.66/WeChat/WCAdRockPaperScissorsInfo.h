@class NSString, WCAdPagInfo, WCAdColorInfo, WCAdCardBtnInfo;

@interface WCAdRockPaperScissorsInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) WCAdPagInfo *animationPagInfo;
@property (retain, nonatomic) WCAdPagInfo *animationPagDarkInfo;
@property (retain, nonatomic) NSString *titleTxt;
@property (retain, nonatomic) WCAdColorInfo *titleColor;
@property (retain, nonatomic) NSString *titleIconUrl;
@property (retain, nonatomic) NSString *titleDarkIconUrl;
@property (retain, nonatomic) NSString *numberDefaultTitle;
@property (retain, nonatomic) NSString *numberCurrentTitle;
@property (retain, nonatomic) NSString *numberRequestParams;
@property (retain, nonatomic) WCAdPagInfo *leftDecorPagInfo;
@property (retain, nonatomic) WCAdPagInfo *rightDecorPagInfo;
@property (retain, nonatomic) WCAdCardBtnInfo *clickActionInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
