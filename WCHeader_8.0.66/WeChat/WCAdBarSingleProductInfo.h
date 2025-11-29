@class NSString, WCAdColorInfo, WCAdCardBtnInfo;

@interface WCAdBarSingleProductInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double bottomOffset;
@property (retain, nonatomic) WCAdColorInfo *productBarBackgroundColor;
@property (retain, nonatomic) NSString *actionBtnTitle;
@property (retain, nonatomic) WCAdColorInfo *actionBtnTitleColor;
@property (retain, nonatomic) NSString *brandImageUrl;
@property (retain, nonatomic) WCAdColorInfo *brandColor;
@property (retain, nonatomic) WCAdCardBtnInfo *clickActionInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
