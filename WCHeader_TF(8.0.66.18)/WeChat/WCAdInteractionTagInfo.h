@class NSString, WCAdColorInfo, WCAdPagInfo;

@interface WCAdInteractionTagInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *normalIconImage;
@property (retain, nonatomic) NSString *normalIconImageDark;
@property (retain, nonatomic) NSString *normalTitle;
@property (retain, nonatomic) WCAdColorInfo *normalTitleColor;
@property (retain, nonatomic) WCAdPagInfo *activeIconPag;
@property (retain, nonatomic) NSString *activeTitle;
@property (retain, nonatomic) WCAdColorInfo *activeTitleColor;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) WCAdColorInfo *descColor;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (id)fetchNormalTitleColor;
- (id)fetchActiveTitleColor;
- (id)fetchDescColor;
- (void).cxx_destruct;

@end
