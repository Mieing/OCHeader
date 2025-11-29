@interface AWEMVNetworkOptimizer : NSObject

+ (void)_aweLazyRegisterStaticLoad;
+ (void)onFirstFetchFinished;
+ (id)requestOptimizeConfig;
+ (BOOL)requestOptimizeEnable;
+ (unsigned long long)supportRequestTypeOptions;
+ (double)disableOptimizeAfterFirstFetchSecs;
+ (unsigned int)requestQueueQos;

@end
