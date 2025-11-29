@class IESLLPOIInfoModel, NSString;

@interface IESLLPOINearbyMapEntryModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLPOIInfoModel *poiInfo;
@property (copy, nonatomic) NSString *nearbyRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poiInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
