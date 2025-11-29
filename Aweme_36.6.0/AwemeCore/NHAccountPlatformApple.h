@class NSString;

@interface NHAccountPlatformApple : NSObject <NHAccountPlatformProtocol>

@property (copy, nonatomic) NSString *userId;
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
- (id)getCurrentAppleUserId;
- (void)OAuth:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)showContinuePage:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
