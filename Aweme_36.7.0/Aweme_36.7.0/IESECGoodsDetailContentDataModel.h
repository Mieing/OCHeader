@class IESECMultiTextWithIconElement, NSString, IESECTextElement, NSArray, IESECGoodsDetailBaseInfoSkuDataModel, IESECSKUPrice, IESECLongTitleElement, IESECDiscountPrice, IESECPriceElement;

@interface IESECGoodsDetailContentDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailBaseInfoSkuDataModel *skuInfo;
@property (retain, nonatomic) IESECPriceElement *priceElement;
@property (retain, nonatomic) IESECPriceElement *marketPriceElement;
@property (retain, nonatomic) IESECPriceElement *discountPriceElement;
@property (retain, nonatomic) IESECSKUPrice *skuPrice;
@property (retain, nonatomic) IESECDiscountPrice *skuDiscountPrice;
@property (retain, nonatomic) IESECTextElement *saleElement;
@property (copy, nonatomic) NSArray *benefitsAndTagsContentElements;
@property (retain, nonatomic) IESECLongTitleElement *goodsTitleElement;
@property (copy, nonatomic) NSArray *bottomTitleTagsContentElements;
@property (retain, nonatomic) IESECMultiTextWithIconElement *userLike;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)benefitsAndTagsContentElementsJSONTransformer;
+ (id)bottomTitleTagsContentElementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
