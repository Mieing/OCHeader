@interface AWECommerceDolphinFeatureCenter : NSObject

+ (id)getFeatureBySolaria:(id)a0 withModel:(id)a1 withStrategy:(id)a2;
+ (id)batchGetFeaturesBySolaria:(id)a0 withStrategy:(id)a1;
+ (void)registerPitayaMessageHandler;
+ (void)registerPitayaMessageHandlerWhenReady;
+ (void)injectAnchorInfoToDolphinFeatureCenterWithModel:(id)a0 dolphinService:(id)a1;
+ (void)addFeaturesFromDictionary:(id)a0 toService:(id)a1 groupBy:(id)a2;
+ (void)addSplitFeaturesFromDictionary:(id)a0 toService:(id)a1 groupBy:(id)a2 prefix:(id)a3;
+ (void)setupDolphinFeatureCenter;
+ (void)injectToDolphinFeatureCenter:(id)a0;
+ (void)injectToDolphinFeatureCenterWithModel:(id)a0;

@end
