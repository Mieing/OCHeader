@interface AWELaunchTaskNetwork : NSObject

+ (void)onNetWorkSetupComplete;
+ (Class)aAWEInfraConfigModuleServiceJXAdapterClass;
+ (BOOL)enableAdjustProcessQueueQOS;
+ (unsigned int)processQueueQOS;
+ (id)whiteURLs;
+ (Class)aAWEInfraConfigModuleServiceNetworkOptAdapterClass;
+ (void)execute;

- (id)aAWEInfraConfigModuleServiceJXAdapter;
- (id)aAWEInfraConfigModuleServiceNetworkOptAdapter;

@end
