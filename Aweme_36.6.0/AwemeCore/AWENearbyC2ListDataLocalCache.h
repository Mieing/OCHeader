@class NSString, AWENearbyC2ListDataResponse, AWENearbyCacheToken;

@interface AWENearbyC2ListDataLocalCache : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyC2ListDataResponse *nearbyFeedRsp;
@property (retain, nonatomic) AWENearbyCacheToken *cacheToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithNearbyFeedRsp:(id)a0;
- (void).cxx_destruct;

@end
