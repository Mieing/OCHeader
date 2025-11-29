@class NSString, NSMutableArray;

@interface BDUGLuckyContainerResourceMonitor : NSObject <BDXResourceLoaderMonitorInterceptor, IESForestInterceptor>

@property (nonatomic) BOOL enableLastProxyTag;
@property (nonatomic) BOOL enableLastResourceTag;
@property (nonatomic) long long maxLastResourceTag;
@property (retain, nonatomic) NSMutableArray *lastResources;
@property (nonatomic) long long lastResourcesTagIndexOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preStartup;
+ (void)feedReady;
+ (id)sharedInstance;

- (void)updateWithSettings:(id)a0;
- (void)__setTagForInjectedInfo:(id)a0 value:(id)a1 key:(id)a2;
- (void)__removeAllTagsFromInjectedInfo:(id)a0;
- (void)__onStartFetchWithURLString:(id)a0;
- (id)__reportKeyWithIndex:(long long)a0;
- (void)__removeAllResourceTagsFromInjectedInfo:(id)a0 count:(long long)a1;
- (id)monitorInterceptorName;
- (void)startFetchWith:(id)a0 taskConfig:(id)a1;
- (id)interceptorName;
- (void)willFetchWithURL:(id)a0 parameters:(id)a1;
- (void)updateProxyTagsWithExtraParams:(id)a0;
- (void)resetReportTags;
- (void).cxx_destruct;
- (id)init;

@end
