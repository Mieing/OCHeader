@class NSString;

@interface NHAccountPlatformXigua : NSObject <XiGuaOpenSDKApiDelegate, NHAccountPlatformProtocol>

@property (copy, nonatomic) id /* block */ XiguaSuccessBlock;
@property (copy, nonatomic) id /* block */ XiguaFailureBlock;
@property (copy, nonatomic) id /* block */ XiguaCancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerApp:(id)a0;
- (void)requestLogin:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)requestBind:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)requestAccessToken:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (BOOL)isSSOAvailable;
- (id)basicThirdPlatformInfo;
- (void)OAuth:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (id)parametersNeeded:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveResponse:(id)a0;
- (BOOL)isAppInstalled;
- (BOOL)handleOpenURL:(id)a0;

@end
