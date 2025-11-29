@class NSString, EcsGiftAddress;

@interface EcsGiftItem : MMObject <NSCopying>

@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *skuImgUrl;
@property (retain, nonatomic) NSString *skuTitle;
@property (retain, nonatomic) NSString *skuSaleParams;
@property (nonatomic) unsigned int skuPrice;
@property (retain, nonatomic) EcsGiftAddress *address;
@property (nonatomic) unsigned int giftStatus;
@property (nonatomic) unsigned int canChangeSku;
@property (retain, nonatomic) NSString *skuId;
@property (retain, nonatomic) NSString *statusWording;
@property (nonatomic) unsigned int statusStyle;
@property (nonatomic) unsigned int statusVersion;
@property (retain, nonatomic) NSString *detailStatusWording;
@property (retain, nonatomic) NSString *presentCntWording;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
