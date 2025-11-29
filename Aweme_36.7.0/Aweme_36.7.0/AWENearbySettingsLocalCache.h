@class NSString, AWENearbyCacheToken, AWENearbySettingsResponse;

@interface AWENearbySettingsLocalCache : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbySettingsResponse *nearbySettingsRsp;
@property (retain, nonatomic) AWENearbyCacheToken *cacheToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
