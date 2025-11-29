@class NSString;

@interface IESECClientAIService : NSObject <IESECClientAIServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPitayaServiceReady;
+ (void)getSingleDictFeatureAsyncWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2 completionBlock:(id /* block */)a3;
+ (BOOL)isEcomServiceReady;
+ (void)registerFeatureUpdateCallbackWithFeatureName:(id)a0 businessName:(id)a1 callback:(id /* block */)a2;
+ (void)unregisterFeatureUpdateCallbackWithFeatureName:(id)a0 businessName:(id)a1 callback:(id /* block */)a2;
+ (id)getSingleNumericFeatureSyncWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2;
+ (id)getSingleStringFeatureSyncWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2;
+ (id)getSingleDictFeatureSyncWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2;
+ (id)getSingleSeqFeatureSyncWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2;
+ (id)batchGetSimpleFeatureSyncWithRequestArray:(id)a0;
+ (void)getSingleNumericFeatureAsyncWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2 completionBlock:(id /* block */)a3;
+ (void)getSingleStringFeatureAsyncWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2 completionBlock:(id /* block */)a3;
+ (void)getSingleSeqFeatureAsyncWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2 completionBlock:(id /* block */)a3;
+ (void)batchGetSimpleFeatureAsyncWithRequestArray:(id)a0 completionBlock:(id /* block */)a1;
+ (void)updateCustomFeatureWithFeatureName:(id)a0 groupName:(id)a1 floatValue:(float)a2;
+ (void)updateCustomFeatureWithFeatureName:(id)a0 groupName:(id)a1 stringValue:(id)a2;
+ (void)updateCustomFeatureWithFeatureName:(id)a0 groupName:(id)a1 dictValue:(id)a2;
+ (BOOL)updateCustomSimpleFeatureWithFeatureName:(id)a0 businessName:(id)a1 floatValue:(float)a2 dump:(BOOL)a3;
+ (BOOL)updateCustomSimpleFeatureWithFeatureName:(id)a0 businessName:(id)a1 stringValue:(id)a2 dump:(BOOL)a3;
+ (BOOL)updateCustomSimpleFeatureWithFeatureName:(id)a0 businessName:(id)a1 seqValue:(id)a2 dump:(BOOL)a3;
+ (BOOL)updateCustomSimpleFeatureWithFeatureName:(id)a0 businessName:(id)a1 dictValue:(id)a2 dump:(BOOL)a3;
+ (void)mockAppLogEventWithEventName:(id)a0 params:(id)a1;
+ (id)sharedInstance;

- (void)initFeature;
- (id)batchGetFeatureInternalWithQueryArray:(id)a0;
- (BOOL)storeValueInternalWithFeatureName:(id)a0 businessName:(id)a1 value:(id)a2 dump:(BOOL)a3;
- (void)initInternal;
- (void)dealloc;

@end
