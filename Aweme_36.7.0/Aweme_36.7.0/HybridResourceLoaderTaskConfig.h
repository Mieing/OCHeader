@class NSString, HybridResourceLoaderProcessorConfig, NSArray, NSNumber, HybridContext;

@interface HybridResourceLoaderTaskConfig : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *bundleName;
@property (retain, nonatomic) NSNumber *dynamic;
@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *disableCDNProcessor;
@property (retain, nonatomic) NSNumber *disableCDNCache;
@property (retain, nonatomic) NSNumber *onlyLocal;
@property (retain, nonatomic) NSNumber *disableBuildin;
@property (retain, nonatomic) NSNumber *disableGurd;
@property (retain, nonatomic) NSNumber *disableGurdUpdate;
@property (retain, nonatomic) NSNumber *useForest;
@property (nonatomic) long long resourceScene;
@property (retain, nonatomic) NSString *monitorSessionUUID;
@property (retain, nonatomic) NSNumber *enableMemoryCache;
@property (nonatomic) BOOL enableRequestReuse;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) HybridResourceLoaderProcessorConfig *processorConfig;
@property (copy, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSNumber *addTimeStampInTTIdentity;
@property (nonatomic) long long loadRetryTimes;
@property (weak, nonatomic) HybridContext *context;
@property (retain, nonatomic) NSNumber *syncTask;
@property (retain, nonatomic) NSNumber *runTaskInGlobalQueue;
@property (retain, nonatomic) NSNumber *onlyPath;
@property (retain, nonatomic) NSNumber *callerPlatform;
@property (retain, nonatomic) NSNumber *fetchResourceType;
@property (retain, nonatomic) NSNumber *preloadeInMemory;
@property (retain, nonatomic) NSNumber *memoryExpireTime;
@property (nonatomic) double loadCostTime;
@property (nonatomic) double parseCostTime;
@property (nonatomic) double configMergeCostTime;
@property (nonatomic) double createPipelineCostTime;
@property (nonatomic) double memoryCostTime;
@property (nonatomic) double geckoCostTime;
@property (nonatomic) double geckoUpdateCostTime;
@property (nonatomic) double geckoTotalCostTime;
@property (nonatomic) double cdnCacheCostTime;
@property (nonatomic) double cdnCostTime;
@property (nonatomic) double cdnTotalCostTime;
@property (nonatomic) double builtinCostTime;
@property (nonatomic) BOOL cdnRegionRedirect;
@property (copy, nonatomic) NSArray *redirectRegions;

- (void).cxx_destruct;

@end
