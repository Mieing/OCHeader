@class SystemAuthConfigurator, NSString, MMFrequencyChecker, NSMutableSet, NSMutableArray;

@interface MMSystemAuthManager : MMUserService <MMResourceMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (retain, nonatomic) MMFrequencyChecker *frequencyChecker;
@property (retain, nonatomic) SystemAuthConfigurator *configurator;
@property (retain, nonatomic) NSMutableSet *rejectedSessionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)VoIPMP_requestMicrophoneAuthWithCompletion:(id /* block */)a0;
+ (void)VoIPMP_requestCameraAuthWithCompletion:(id /* block */)a0;
+ (void)VoIP_requestMicrophoneAuthWithCompletion:(id /* block */)a0;
+ (void)VoIP_requestCameraAuthWithCompletion:(id /* block */)a0;
+ (BOOL)isRecordAuthorizedFor:(unsigned long long)a0;
+ (unsigned int)locationAuthorizationStatusFor:(unsigned long long)a0;
+ (BOOL)isLocationAuthorizedFor:(unsigned long long)a0;
+ (unsigned int)contactsAuthorizationStatusFor:(unsigned long long)a0;
+ (BOOL)isContactsAuthorizedFor:(unsigned long long)a0;
+ (BOOL)needApplyContactsAuthorizationFor:(unsigned long long)a0;
+ (unsigned int)authorizationStatusFor:(unsigned int)a0 scene:(unsigned long long)a1;
+ (BOOL)needApplyForAuthorizationFor:(unsigned int)a0 scene:(unsigned long long)a1;
+ (id)currentPrivacyFullStatus;

- (void)reportWithAction:(unsigned long long)a0 capability:(unsigned int)a1 scene:(unsigned long long)a2;
- (id)requestRecordPermissionFor:(unsigned long long)a0;
- (id)requestMicrophoneAuthForScene:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)requestLocationAuthForScene:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)isLocationRequestFrequencyLimitedFor:(unsigned long long)a0;
- (BOOL)isUserSensitiveRegion;
- (id)locationSceneIDFor:(unsigned long long)a0;
- (id)requestAccessContactsAuthFor:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)requestCameraAuthForScene:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)onServiceInit;
- (id)requestAuthFor:(unsigned int)a0 scene:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)requestAuthResultFor:(unsigned int)a0 scene:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)__requestAuthFor:(unsigned int)a0 scene:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)checkRequestQueue;
- (void)process:(id)a0;
- (id)requestWeChatAndSystemAuthFor:(unsigned int)a0 scene:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)completeAndCheckQueue;
- (BOOL)isAuthRequestFrequencyLimitedFor:(unsigned int)a0 sceneKey:(id)a1;
- (unsigned long long)getSceneFromWebUrl:(id)a0;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)reportUnControlSwitch:(unsigned int)a0 authScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
