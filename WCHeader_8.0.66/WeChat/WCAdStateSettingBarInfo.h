@class NSString, WCAdColorInfo, WCAdCardBtnInfo;

@interface WCAdStateSettingBarInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (copy, nonatomic) NSString *numberDefaultTitle;
@property (copy, nonatomic) NSString *numberRequestParams;
@property (retain, nonatomic) WCAdColorInfo *numberTitleColor;
@property (copy, nonatomic) NSString *numberCurrentTitle;
@property (copy, nonatomic) NSString *jumpLinkTitle;
@property (retain, nonatomic) WCAdColorInfo *linkTitleColor;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) WCAdColorInfo *descColor;
@property (copy, nonatomic) NSString *jumpLinkIconLight;
@property (copy, nonatomic) NSString *jumpLinkIconDark;
@property (retain, nonatomic) WCAdCardBtnInfo *jumpLinkActionInfo;
@property (nonatomic) long long stateTriggerType;
@property (nonatomic) double stateTriggerTime;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)convertFromFireworkTagInfo:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)fetchNumberTitleColor;
- (id)fetchLinkTitleColor;
- (id)fetchDescColor;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
