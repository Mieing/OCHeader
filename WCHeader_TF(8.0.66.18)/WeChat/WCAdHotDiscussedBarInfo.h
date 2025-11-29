@class NSString, NSArray, WCAdColorInfo, WCAdCardBtnInfo;

@interface WCAdHotDiscussedBarInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) WCAdColorInfo *labelTextColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) WCAdColorInfo *titleColor;
@property (copy, nonatomic) NSString *numberDefaultTitle;
@property (copy, nonatomic) NSString *numberRequestParams;
@property (copy, nonatomic) NSString *numberCurrentTitle;
@property (retain, nonatomic) WCAdColorInfo *numberTitleColor;
@property (retain, nonatomic) NSArray *headImageList;
@property (retain, nonatomic) WCAdCardBtnInfo *jumpLinkActionInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)fetchLabelTextColor;
- (id)fetchTitleColor;
- (id)fetchNumberTitleColor;
- (void).cxx_destruct;

@end
