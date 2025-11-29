@class NSString, AWEPOIFeedUgcRecommendDishsModel;

@interface AWEPOIFeedUgcContentExtraGroupModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIFeedUgcRecommendDishsModel *recFoodExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
