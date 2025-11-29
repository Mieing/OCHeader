@class IESECLiveGoodsCampaignModel, NSString, IESECLiveGoodsExtraModel, IESECLiveGoodsPriceBuilder, NSURL, NSNumber;

@interface IESECLiveSubsetGoodsModel : MTLModel <MTLJSONSerializing, IESECLiveSubsetGoodsModel>

@property (retain, nonatomic) IESECLiveGoodsPriceBuilder *priceInfoBuilder;
@property (retain, nonatomic) NSNumber *serverTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *cover;
@property (retain, nonatomic) IESECLiveGoodsExtraModel *extra;
@property (copy, nonatomic) NSString *priceHeader;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (copy, nonatomic) NSString *minPriceStr;
@property (retain, nonatomic) IESECLiveGoodsCampaignModel *campaign;

+ (id)couponTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
