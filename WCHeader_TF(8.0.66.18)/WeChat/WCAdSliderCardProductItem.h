@class NSString, WCAdColorInfo, WCAdCardBtnInfo;

@interface WCAdSliderCardProductItem : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *actionBarTitle;
@property (retain, nonatomic) WCAdColorInfo *actionBarTitleColor;
@property (retain, nonatomic) WCAdColorInfo *highlightColor;
@property (nonatomic) double timeInterval;
@property (retain, nonatomic) WCAdCardBtnInfo *clickActionInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)fetchHighlightColor;
- (id)fetchActionBarTitleColor;
- (void).cxx_destruct;

@end
