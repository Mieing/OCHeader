@class NSString;

@interface CardTicketItem : MMObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *fromUserName;
@property (nonatomic) unsigned int fromScene;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *cardTypeName;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *brandName;
@property (retain, nonatomic) NSString *cardExt;
@property (nonatomic) unsigned int cardShareFrom;
@property (nonatomic) BOOL isRecommend;
@property (retain, nonatomic) NSString *recommendCardId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fromUserName;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_cardType;
+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_color;
+ (void)PBArrayAdd_cardTypeName;
+ (void)PBArrayAdd_brandName;
+ (void)PBArrayAdd_cardExt;
+ (void)PBArrayAdd_cardShareFrom;
+ (void)PBArrayAdd_isRecommend;
+ (void)PBArrayAdd_recommendCardId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
