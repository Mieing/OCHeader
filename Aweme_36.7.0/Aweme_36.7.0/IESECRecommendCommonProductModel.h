@class IESECRecommendCommonProductPriceModel, NSNumber, NSString;

@interface IESECRecommendCommonProductModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECRecommendCommonProductPriceModel *price;
@property (retain, nonatomic) NSNumber *sales;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
