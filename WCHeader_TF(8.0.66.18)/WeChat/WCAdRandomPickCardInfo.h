@class NSString, WCAdRandomPickCardItemsInfo;

@interface WCAdRandomPickCardInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *introduceTitle;
@property (retain, nonatomic) NSString *titleIconUrl;
@property (retain, nonatomic) NSString *titleColor;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *descColor;
@property (retain, nonatomic) NSString *descColorDark;
@property (retain, nonatomic) NSString *doneTitle;
@property (retain, nonatomic) NSString *doneTitleColor;
@property (retain, nonatomic) NSString *doneDesc;
@property (retain, nonatomic) NSString *doneDescColor;
@property (retain, nonatomic) NSString *doneDescColorDark;
@property (retain, nonatomic) NSString *numberRequestParams;
@property (retain, nonatomic) NSString *involvedCountInfo;
@property (retain, nonatomic) NSString *collectedCountInfo;
@property (retain, nonatomic) WCAdRandomPickCardItemsInfo *cardsInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
