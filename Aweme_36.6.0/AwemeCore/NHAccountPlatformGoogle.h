@class NSString;

@interface NHAccountPlatformGoogle : NSObject <NHAccountPlatformProtocol>

@property (copy, nonatomic) NSString *appkey;
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
- (void)lazyRegisterApp:(id)a0;
- (void)OAuth:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)ensureGoogleRegistered;
- (void).cxx_destruct;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (BOOL)isAppInstalled;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (BOOL)handleOpenURL:(id)a0;

@end
