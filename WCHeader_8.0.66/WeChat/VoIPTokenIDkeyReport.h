@interface VoIPTokenIDkeyReport : NSObject

+ (void)reportId:(int)a0 Key:(int)a1;
+ (void)registerPushKit;
+ (void)tokenCallbackNotVoipType;
+ (void)tokenCallbackTokenNotVoipType;
+ (void)tokenCallbackTokenTypeOk;
+ (void)tokenCallbackTokenInvaildate;
+ (void)pushReceiveContentEmpty;
+ (void)pushReceiveCmdTypeError;
+ (void)pushReceiveCmdEmpty;
+ (void)pushReceiveBroadcast;
+ (void)tokenRegisterTokenEmpty;
+ (void)tokenRegisterCertAppStore;
+ (void)tokenRegisterCertWC;
+ (void)tokenRegisterSettingAppStore;
+ (void)tokenRegisterSettingSandbox;
+ (void)tokenRegisterCgiCreateError;
+ (void)tokenRegisterCgiSent;
+ (void)tokenRegisterCgiCallbackEmpty;
+ (void)tokenRegisterCgiConnectTimeout;
+ (void)tokenRegisterCgiResponseEmpty;
+ (void)tokenRegisterCgiResponseError;
+ (void)tokenRegisterCgiResponseOk;
+ (void)tokenRegisterUsingCacheToken;
+ (void)tokenRegisterCacheTokenNil;
+ (void)reportAuthStatus:(id)a0;

@end
