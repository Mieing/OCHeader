@class NSMutableDictionary, TIMXSDKInstance;

@interface TIMXSDKInstancesManager : NSObject

@property (class, readonly, weak, nonatomic) TIMXSDKInstance *iesim_TIMXSDKInstance;
@property (class, readonly, weak, nonatomic) TIMXSDKInstance *iesim_TIMXSDKInstance_Nullable;
@property (class, readonly, nonatomic) NSMutableDictionary *p_instanceDict;

+ (id)instanceWithToken:(id)a0;
+ (void)iesim_PrepareInstanceIfNecessary;
+ (void)iesim_DestoryCurrentSDKInstance;
+ (void)p_fillExtraParamToConfig:(id)a0;
+ (void)removeInstanceWithToken:(id)a0;
+ (void)addInstance:(id)a0;

@end
