@class NSString, TIMXSDKInstance;

@interface IESIMSDKUtility : NSObject <IESIMTIMXLifeMessage>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (void)p_clearPropertyOfSDK;
- (long long)currentSDKUserID;
- (double)currentSDKLoginTime;
- (id)dbRebuildPuller;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
