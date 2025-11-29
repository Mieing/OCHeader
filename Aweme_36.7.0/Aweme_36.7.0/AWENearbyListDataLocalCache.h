@class NSString, AWENearbyListDataResponse, AWENearbyCacheToken;

@interface AWENearbyListDataLocalCache : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyListDataResponse *nearbyFeedRsp;
@property (retain, nonatomic) AWENearbyCacheToken *cacheToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithNearbyFeedRsp:(id)a0;
- (void).cxx_destruct;

@end
