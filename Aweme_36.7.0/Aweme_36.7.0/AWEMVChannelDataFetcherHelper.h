@interface AWEMVChannelDataFetcherHelper : NSObject

+ (BOOL)enableRequestConcurrentControlForFetcher:(id)a0;
+ (BOOL)enableRequestDependencyPolicyForFetcher:(id)a0;
+ (BOOL)enableRequestLevelControlForFetcher:(id)a0;
+ (BOOL)isSuitableForReviseHttpTaskQueuePriority:(id)a0;
+ (void)reviseHttpTaskQueuePriority:(id)a0;
+ (void)preloadImageWithResponseDict:(id)a0 requestContext:(id)a1 feedConfig:(id)a2;
+ (id)fetcherWithRequestContext:(id)a0 feedConfig:(id)a1;
+ (unsigned long long)getApplyFetchType:(id)a0;
+ (id)networkControlConfig;
+ (id)requestLevelImproveConfig;

@end
