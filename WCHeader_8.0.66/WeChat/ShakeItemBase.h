@class ShakeTvItem, NSString, ShakePayItem, ShakeTempSessionItem, ShakeTvHistoryItem, ShakeUserItem, ShakeWeAppItem, ShakeProductItem, ShakeUrlItem;

@interface ShakeItemBase : NSObject <PBCoding, NSCoding, NSCopying>

@property (nonatomic) int itemType;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) ShakeTvItem *shakeTvItem;
@property (retain, nonatomic) ShakeUrlItem *shakeUrlItem;
@property (retain, nonatomic) ShakeUserItem *shakeUsrItem;
@property (retain, nonatomic) ShakePayItem *shakePayItem;
@property (retain, nonatomic) ShakeProductItem *shakeProductItem;
@property (retain, nonatomic) ShakeTempSessionItem *shakeTempSessionItem;
@property (retain, nonatomic) ShakeTvHistoryItem *shakeTvHistoryItem;
@property (retain, nonatomic) ShakeWeAppItem *shakeWeAppItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_itemType;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_shakeTvItem;
+ (void)PBArrayAdd_shakeUrlItem;
+ (void)PBArrayAdd_shakeUsrItem;
+ (void)PBArrayAdd_shakePayItem;
+ (void)PBArrayAdd_shakeProductItem;
+ (void)PBArrayAdd_shakeTempSessionItem;
+ (void)PBArrayAdd_shakeWeAppItem;
+ (void)initialize;
+ (void)parseXml:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 toShakeAction:(id)a1;
+ (id)parseXmlToShakePay:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)parseXmlToShakeTvHistory:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)parseXmlToTempSession:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)parseXmlToShakeWeAppItem:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)parseXmlToShakeProduct:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)parseXmlToShakeUrl:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)parseXmlToShakeUser:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)getShakeItemFromXml:(id)a0 andType:(int)a1;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
