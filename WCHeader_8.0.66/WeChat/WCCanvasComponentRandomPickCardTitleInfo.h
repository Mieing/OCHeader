@class NSString;

@interface WCCanvasComponentRandomPickCardTitleInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *fontColorNormal;
@property (retain, nonatomic) NSString *fontColorSpecial;
@property (retain, nonatomic) NSString *unlockPrefix;
@property (retain, nonatomic) NSString *redundantPrefix;
@property (retain, nonatomic) NSString *collectedPrefix;
@property (retain, nonatomic) NSString *commonSuffix;
@property (retain, nonatomic) NSString *specialPrefix;
@property (retain, nonatomic) NSString *specialSuffix;
@property (retain, nonatomic) NSString *allCollectedTitle;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
