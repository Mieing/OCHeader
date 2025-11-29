@class NSString, NSArray, NSDictionary, AWEURLModel;

@interface AWEPOIFeedUgcRecommendDishsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pageListString;
@property (copy, nonatomic) NSArray *recommendDishInfos;
@property (copy, nonatomic) NSDictionary *pageListData;
@property (retain, nonatomic) AWEURLModel *recFoodIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendDishInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateCollectCountWithParams:(id)a0;
- (void).cxx_destruct;

@end
