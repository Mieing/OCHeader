@class NSDictionary, NSString, AWEGrouponCacheToken;

@interface AWEGrouponHalfScreenLocationCache : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponCacheToken *cacheToken;
@property (retain, nonatomic) NSDictionary *cacheParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithNearbyHalfScreenLocationParams:(id)a0;
- (void).cxx_destruct;

@end
