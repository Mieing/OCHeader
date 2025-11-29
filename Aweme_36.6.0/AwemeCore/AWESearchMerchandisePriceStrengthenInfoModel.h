@class AWESearchMerchandiseCommonTextStruct, AWEURLModel;

@interface AWESearchMerchandisePriceStrengthenInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *priceTrendBg;
@property (retain, nonatomic) AWEURLModel *priceGrabIcon;
@property (retain, nonatomic) AWEURLModel *priceTag;
@property (retain, nonatomic) AWESearchMerchandiseCommonTextStruct *priceUnderLine;
@property (retain, nonatomic) AWESearchMerchandiseCommonTextStruct *priceSuffix;

+ (id)priceTrendBgJsonTransformer;
+ (id)priceGrabIconJsonTransformer;
+ (id)priceTagJsonTransformer;
+ (id)priceUnderLineJsonTransformer;
+ (id)priceSuffixJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
