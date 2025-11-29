@interface OMJResourceCacheCleanupOptions : NSObject

@property (readonly, nonatomic) long long cacheSizeLimit;
@property (readonly, nonatomic) long long cleanupThreshold;

- (id)initWithCacheSizeLimit:(long long)a0;
- (id)initWithCacheSizeLimit:(long long)a0 cleanupThreshold:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
