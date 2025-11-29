@class NSString, NSMutableDictionary, HybridContext;

@interface HybridMonitor : NSObject <HybridMonitorProtocol>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSMutableDictionary *commonCategory;
@property (copy, nonatomic) NSString *monitorSessionUUID;
@property (retain, nonatomic) NSMutableDictionary *sessionEvent;
@property (weak, nonatomic) HybridContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addInterceptor:(id)a0;
+ (void)attachVirtualAid:(id)a0 toView:(id)a1;
+ (void)removeInterceptor:(id)a0;
+ (id)callSelectorWith:(id)a0 obj:(id)a1;
+ (id)monitorURLWithOriginURL:(id)a0 platform:(long long)a1;
+ (BOOL)__schemaQueryWithChannelStyle:(id)a0;
+ (id)resolveChannelStyleToMonitorStyle:(id)a0;
+ (BOOL)__schemaQueryWithUrlStyle:(id)a0;
+ (id)resolveURLStyleToMonitorStyle:(id)a0;
+ (id)interceptorList;
+ (void)startMonitorHook;
+ (id)simpleReportter;

- (void)addCommonCategory:(id)a0;
- (void)attachKitView:(id)a0;
- (void)__notifyWithEventName:(id)a0 bizTag:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 platform:(long long)a6 aid:(id)a7 maySample:(BOOL)a8 urlString:(id)a9;
- (void)reportWithEventName:(id)a0 bid:(id)a1 containerView:(id)a2 commonParams:(id)a3 metric:(id)a4 category:(id)a5 extra:(id)a6 platform:(long long)a7 aid:(id)a8 maySample:(BOOL)a9;
- (void)reportWithEventName:(id)a0 bid:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 platform:(long long)a6 aid:(id)a7 maySample:(BOOL)a8;
- (void)collectEventTime:(id)a0;
- (void)reportResourceStatus:(id)a0 resourceStatus:(long long)a1 resourceType:(long long)a2 resourceURL:(id)a3 resourceVersion:(id)a4 resourceChannel:(id)a5 resourceBundle:(id)a6 resourceProcessorType:(long long)a7 extraInfo:(id)a8 extraMetrics:(id)a9;
- (id)eventDic;
- (void)collectLong:(long long)a0 field:(id)a1;
- (void)collectString:(id)a0 field:(id)a1;
- (void)collectEventTime:(id)a0 reportToMonitor:(BOOL)a1;
- (void)_saveLongEvents:(long long)a0 field:(id)a1;
- (void)collectBoolean:(BOOL)a0 field:(id)a1;
- (void)collectInt:(int)a0 field:(id)a1;
- (void)reportError:(id)a0 withError:(id)a1 withContext:(id)a2;
- (id)getContainerTiming;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
