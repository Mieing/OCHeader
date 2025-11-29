@class TIMXSDKInstance;

@interface IESIMSDKInstancesManager : NSObject

@property (class, readonly, weak, nonatomic) TIMXSDKInstance *iesim_TIMXSDKInstance;
@property (class, readonly, weak, nonatomic) TIMXSDKInstance *iesim_TIMXSDKInstance_Nullable;

+ (void)iesim_PrepareInstanceIfNecessary;
+ (void)iesim_DestoryCurrentSDKInstance;

@end
