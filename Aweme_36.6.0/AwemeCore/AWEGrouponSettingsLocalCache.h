@class AWEGrouponCacheToken, NSString, AWEGrouponSettingsResponse;

@interface AWEGrouponSettingsLocalCache : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponSettingsResponse *nearbySettingsRsp;
@property (retain, nonatomic) AWEGrouponCacheToken *cacheToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
