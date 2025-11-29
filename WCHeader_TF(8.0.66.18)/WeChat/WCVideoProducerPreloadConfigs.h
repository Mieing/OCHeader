@interface WCVideoProducerPreloadConfigs : NSObject <NSCopying>

@property (nonatomic) long long maxConcurrencyLimit;
@property (nonatomic) long long maxCacheSizeLimit;
@property (nonatomic) long long templateBufferCount;
@property (nonatomic) long long musicBufferCount;
@property (nonatomic) unsigned long long preloadRules;

+ (id)createFromConfigJson:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
