@class NSString;

@interface AWEConcernGoodsCardLifeFeedSpuPoi : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *poiNameV2;
@property (copy, nonatomic) NSString *poiNameV2Prefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
