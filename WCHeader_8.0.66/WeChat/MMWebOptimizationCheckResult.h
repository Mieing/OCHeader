@class NSString, MMWebviewPrefetchResult;

@interface MMWebOptimizationCheckResult : MMObject

@property (nonatomic) BOOL hasAllowanceAsyncA8Key;
@property (copy, nonatomic) NSString *a8KeyRespUrl;
@property (nonatomic) BOOL hasCacheDnsResult;
@property (retain, nonatomic) MMWebviewPrefetchResult *prefetchResult;

- (void).cxx_destruct;

@end
