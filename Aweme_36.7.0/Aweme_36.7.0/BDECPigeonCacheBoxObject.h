@class NSDictionary, NSString;

@interface BDECPigeonCacheBoxObject : MTLModel <MTLJSONSerializing>

@property (nonatomic) double validityPeriod;
@property (nonatomic) double cacheTime;
@property (copy, nonatomic) NSDictionary *cacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
