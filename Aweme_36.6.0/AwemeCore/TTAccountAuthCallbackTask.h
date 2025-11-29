@interface TTAccountAuthCallbackTask : NSObject

+ (id)startSNSSDKSSOAuthBindThirdPlatformCallbackWithParams:(id)a0 completedBlock:(id /* block */)a1;
+ (id)startSNSSDKSSOAuthLoginOnlyCallbackWithParams:(id)a0 completedBlock:(id /* block */)a1;
+ (id)startSNSSDKSSOAuthCallbackWithParams:(id)a0 completedBlock:(id /* block */)a1;
+ (id)startSNSSDKSSOAuthLoginCallbackWithParams:(id)a0 completedBlock:(id /* block */)a1;
+ (id)startSNSSDKSSOAuthCallbackWithRequestReason:(long long)a0 params:(id)a1 completedBlock:(id /* block */)a2;
+ (id)p_startSNSSDKSSOAuthCallbackCombineWithRequestReason:(long long)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)startSNSSDKSSOAuthCallbackWithRequestReason:(long long)a0 params:(id)a1 trackParams:(id)a2 completedBlock:(id /* block */)a3;
+ (id)p_startSNSSDKSSOAuthCallbackCombineWithRequestReason:(long long)a0 params:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
+ (id)startSNSSDKSSOAuthShareUserInfoCallbackWithParams:(id)a0 completedBlock:(id /* block */)a1;
+ (id)shareAppToSNSPlatform:(id)a0 completedBlock:(id /* block */)a1;
+ (id)startSNSSDKAuthSwitchBindWithReq:(id)a0 trackParams:(id)a1 completedBlock:(id /* block */)a2;
+ (id)startWAPAuthSwitchBindWithReq:(id)a0 completedBlock:(id /* block */)a1;

@end
