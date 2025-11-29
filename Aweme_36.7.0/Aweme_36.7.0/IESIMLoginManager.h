@class NSString, TIMXSDKInstance, IESIMSetupOptions, NSObject;
@protocol IESIMLoginManagerDelegate, OS_dispatch_semaphore;

@interface IESIMLoginManager : NSObject <TIMXOIMClientObserverDelegate, IESIMTIMXLifeMessage, IESIMLoginManagerProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (nonatomic) BOOL hasLoginSuccess;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *kickOffLock;
@property (copy) NSString *userID;
@property (nonatomic) BOOL needForceAsyncCallLoginChangeMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMLoginManagerDelegate> delegate;
@property (retain, nonatomic) IESIMSetupOptions *setupOptions;
@property (readonly, copy, nonatomic) NSString *configUserID;

- (void)continueFetchPullWithCompletion:(id /* block */)a0;
- (void)imClientIdentityTokenDidBecomeInvalid;
- (BOOL)hasLogin;
- (void)restartInitIfNeed;
- (unsigned long long)initStatusWithInboxType:(int)a0;
- (void)configAndInitSDKWithSetupOptions:(id)a0;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)manuallyKickOffPuller;
- (void)p_setupIMSDK;
- (void)p_sdkLogin;
- (void)p_fetchRemoteTokenWithCurrentRetryTimes:(long long)a0 context:(id)a1;
- (void)p_sdkLogoutNewWithClearDB:(BOOL)a0;
- (void)p_sdkLogoutWithClearDB:(BOOL)a0;
- (id)p_sdkPuller;
- (void)p_restartInitInbox:(int)a0;
- (id)p_sdkIMClient;
- (void)closeDatabaseForCurrentUserWithCompletion:(id /* block */)a0;
- (void)truncateDatabaseWalWithCompletion:(id /* block */)a0;
- (void)p_trackAccountInfoWithScene:(id)a0 loginUid:(long long)a1;
- (void)loginWithContext:(id)a0;
- (long long)currentSDKUid;
- (void)recoverMessageDBWithBlock:(id /* block */)a0;
- (void)reInitForDBCorrupt;
- (void)logoutWithClearDB:(BOOL)a0;
- (void)logout;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
