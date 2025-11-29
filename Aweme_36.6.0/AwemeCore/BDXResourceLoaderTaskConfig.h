@class NSString, BDXContext, NSDictionary, BDXResourceLoaderProcessorConfig, NSNumber;

@interface BDXResourceLoaderTaskConfig : NSObject <NSCopying>

@property (retain, nonatomic) BDXContext *context;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL isFake;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *bundleName;
@property (retain, nonatomic) NSNumber *dynamic;
@property (retain, nonatomic) NSString *geckoUpdatePolicy;
@property (retain, nonatomic) NSNumber *onlyLocal;
@property (retain, nonatomic) NSNumber *disableGurd;
@property (retain, nonatomic) NSNumber *disableBuildin;
@property (retain, nonatomic) NSNumber *disableGurdUpdate;
@property (retain, nonatomic) NSNumber *disableMemory;
@property (retain, nonatomic) BDXResourceLoaderProcessorConfig *processorConfig;
@property (copy, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSNumber *disableCDNCache;
@property (nonatomic) long long loadRetryTimes;
@property (copy, nonatomic) NSDictionary *schemaQueryItems;
@property (nonatomic) BOOL isImageTask;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL downsampling;
@property (retain, nonatomic) NSNumber *syncTask;
@property (retain, nonatomic) NSNumber *runTaskInGlobalQueue;
@property (retain, nonatomic) NSNumber *directCallback;
@property (retain, nonatomic) NSNumber *onlyPath;
@property (retain, nonatomic) NSNumber *callerPlatform;
@property (retain, nonatomic) NSNumber *fetchResourceType;
@property (retain, nonatomic) NSNumber *preloadeInMemory;
@property (retain, nonatomic) NSNumber *memoryExpireTime;
@property (retain, nonatomic) NSNumber *memoryExpireStartTime;
@property (retain, nonatomic) NSNumber *memoryExpireEndTime;
@property (retain, nonatomic) NSNumber *gurdDownloadPriority;
@property (copy, nonatomic) NSString *memoryPriority;
@property (retain, nonatomic) NSNumber *isPreload;
@property (copy, nonatomic) NSDictionary *preloadConfig;
@property (weak, nonatomic) id sourceIdentifier;
@property (nonatomic) long long donwloaderExprieTime;
@property (nonatomic) BOOL skipCancelCallbackAndMonitor;

- (void)setFakeTask;
- (BOOL)isPPE;
- (BOOL)isBOE;
- (id)ttnetEnv;
- (id)contianerID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
