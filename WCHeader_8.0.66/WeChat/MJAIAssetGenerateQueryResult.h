@class NSArray;

@interface MJAIAssetGenerateQueryResult : NSObject

@property (readonly, nonatomic) NSArray *aiAssetURLs;
@property (readonly, nonatomic) unsigned int nextQueryInterval;
@property (readonly, nonatomic) unsigned int maxRetryTimes;

- (id)initWithAIAssetURLs:(id)a0 nextQueryInterval:(unsigned int)a1 maxRetryTimes:(unsigned int)a2;
- (id)description;
- (void).cxx_destruct;

@end
