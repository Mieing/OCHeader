@class NSString, NSMutableDictionary, NSMapTable;

@interface AWEOpenPlatformLynxAuthManager : NSObject <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *authInfoMap;
@property (retain, nonatomic) NSMapTable *containerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (BOOL)shouldUseLynxAuth:(id)a0;
- (void)startLynxAuth:(id)a0 originParams:(id)a1 withAuthCompletion:(id /* block */)a2 withFailCompletion:(id /* block */)a3;
- (BOOL)checkAuthEntranceInAllowList:(id)a0;
- (BOOL)checkAuthPageTypeInAllowList:(id)a0;
- (BOOL)checkAuthPageSupportLandScape:(id)a0;
- (void)retryAuth:(id)a0;
- (void)subscribeLynxAuthEvent;
- (void)requestAuthInfoWithModel:(id)a0 params:(id)a1;
- (id)sourceFromFlowType:(id)a0;
- (BOOL)isLibraOpen;
- (BOOL)useAnniex:(id)a0;
- (BOOL)useAnniexSSR:(id)a0;
- (id)getAnniexContainerURLWithSSR:(BOOL)a0;
- (void)checkAuthFlowAndRetry:(id)a0;
- (void)runCompletionWithAuthID:(id)a0 responseModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
