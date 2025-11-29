@class NSString;

@interface AWENearbyFeedColdCacheToken : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cityCode;
@property (nonatomic) double cacheTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithCityCode:(id)a0;
- (void).cxx_destruct;

@end
