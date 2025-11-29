@interface HunterCacheConfig : NSObject

@property (copy, nonatomic) id /* block */ customIdentifierBlock;
@property (nonatomic) unsigned long long maxCacheCount;
@property (nonatomic) unsigned long long maxCountWithEverySchema;
@property (nonatomic) BOOL clearOnMemoryWarning;

- (void).cxx_destruct;
- (id)init;

@end
