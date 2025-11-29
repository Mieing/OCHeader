@class NSString, NSArray, NSDictionary, IESForestSwitches, NSNumber, NSObject;
@protocol OS_dispatch_queue, IESForestPostProcessorProtocol;

@interface IESForestRequestParameters : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *disableGecko;
@property (retain, nonatomic) NSNumber *disableBuiltin;
@property (retain, nonatomic) NSNumber *disableCDN;
@property (retain, nonatomic) NSNumber *disableCDNCache;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSArray *prefixList;
@property (copy, nonatomic) NSString *resourceVersion;
@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *onlyLocal;
@property (copy, nonatomic) NSArray *fetcherSequence;
@property (nonatomic) long long cdnRetryTimes;
@property (retain, nonatomic) NSNumber *onlyPath;
@property (retain, nonatomic) NSNumber *enableMemoryCache;
@property (retain, nonatomic) NSNumber *memoryExpiredTime;
@property (retain, nonatomic) NSNumber *cdnExpiredTime;
@property (retain, nonatomic) NSNumber *cdnTimeoutInterval;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSNumber *isPreload;
@property (retain, nonatomic) NSNumber *enableRequestReuse;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) long long resourceScene;
@property (retain, nonatomic) NSNumber *runWorkflowInGlobalQueue;
@property (retain, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSDictionary *customParameters;
@property (nonatomic) BOOL skipMonitor;
@property (copy, nonatomic) id /* block */ skipMonitorBlock;
@property (retain, nonatomic) id<IESForestPostProcessorProtocol> postProcessor;
@property (copy, nonatomic) NSArray *postProcessorCandiDates;
@property (copy, nonatomic) IESForestSwitches *switches;
@property (copy, nonatomic) NSString *preloadScene;
@property (copy, nonatomic) NSString *customUA;
@property (copy, nonatomic) NSString *bid;
@property (nonatomic) struct CGSize { double width; double height; } imageTargetSize;
@property (nonatomic) BOOL imagePreloadAllFrames;

+ (id)requestParameterWithParameter:(id)a0;
+ (void)p_reusableCopyWithDest:(id)a0 source:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
