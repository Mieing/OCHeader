@class IESECGoodsDetailIMMetaModel, IESECGoodsDetailBottomTipMetaModel, IESECGoodsDetailCartMetaModel, IESECGoodsDetailSKUMetaModel, NSString, IESECGoodsDetailAppointMetaModel, NSDictionary, IESECGoodsDetailBottomShopMetaModel, IESECGoodsDetailAddToCartMetaModel, IESECGoodsDetailBuyMetaModel;

@interface IESECGoodsDetailBottomMetaModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailIMMetaModel *imMeta;
@property (retain, nonatomic) IESECGoodsDetailCartMetaModel *cartMeta;
@property (retain, nonatomic) IESECGoodsDetailBottomShopMetaModel *shopMeta;
@property (retain, nonatomic) IESECGoodsDetailAddToCartMetaModel *addToCartMeta;
@property (retain, nonatomic) IESECGoodsDetailSKUMetaModel *skuMeta;
@property (retain, nonatomic) IESECGoodsDetailBuyMetaModel *buyMeta;
@property (retain, nonatomic) IESECGoodsDetailAppointMetaModel *appointMeta;
@property (retain, nonatomic) IESECGoodsDetailBottomTipMetaModel *tipMeta;
@property (copy, nonatomic) NSDictionary *skuInfo;
@property (nonatomic) BOOL oneStepAddToCart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
