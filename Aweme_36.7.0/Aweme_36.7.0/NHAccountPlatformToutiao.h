@class NSString;

@interface NHAccountPlatformToutiao : NSObject <ToutiaoOpenSDKApiDelegate, NHAccountPlatformProtocol>

@property (copy, nonatomic) id /* block */ ToutiaoSuccessBlock;
@property (copy, nonatomic) id /* block */ ToutiaoFailureBlock;
@property (copy, nonatomic) id /* block */ ToutiaoCancelBlock;
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
