@interface MMFinderJoinLivePrefetchInfo : NSObject

@property (nonatomic) unsigned long long fetchType;
@property (nonatomic) BOOL usePrefetchCache;
@property (nonatomic) unsigned long long prefetchCgiRequestTime;
@property (nonatomic) unsigned long long consumeCgiRequestTime;

@end
