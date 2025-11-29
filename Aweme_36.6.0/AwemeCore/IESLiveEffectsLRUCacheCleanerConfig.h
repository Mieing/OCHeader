@class NSString;

@interface IESLiveEffectsLRUCacheCleanerConfig : NSObject

@property (nonatomic) long long capacity;
@property (nonatomic) long long redLineCapacity;
@property (nonatomic) long long trimSize;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0 capacity:(long long)a1 redLineCapacity:(long long)a2 trimSize:(long long)a3;
- (id)initWithIdentifier:(id)a0 serverConfig:(id)a1 clientConfig:(id)a2;
- (void)updateWithCapacity:(long long)a0 redLineCapacity:(long long)a1;
- (void).cxx_destruct;

@end
