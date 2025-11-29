@class NSString, IESLLLiveShelfCardElementSeckillModel, IESLLLiveShelfCardMarketingPriceModel;

@interface IESLLLiveShelfCardElementMarketingModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLLiveShelfCardMarketingPriceModel *displayInfo;
@property (retain, nonatomic) IESLLLiveShelfCardElementSeckillModel *flashSale;
@property (copy, nonatomic) NSString *prePriceText;
@property (copy, nonatomic) NSString *priceSuffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
