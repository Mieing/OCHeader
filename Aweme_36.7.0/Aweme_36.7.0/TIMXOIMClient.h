@class NSString, TIMXSDKInstance, NSObject, TIMXOSetUpOptions;
@protocol TIMXMessageStoreProtocol, OS_dispatch_queue, TIMXOIMClientObserverDelegate;

@interface TIMXOIMClient : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryExecQueue;
@property (copy, nonatomic) TIMXOSetUpOptions *options;
@property BOOL appWillTerminate;
@property (weak, nonatomic) id<TIMXOIMClientObserverDelegate> delegate;
@property (readonly, nonatomic) long long currentUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gitHash;
+ (void)setUpWithOptions:(id)a0;
+ (id)version;
+ (id)buildNumber;

- (void)handleAppWillTerminateNotification:(id)a0;
- (void)closeDatabaseForCurrentUserWithCompletion:(id /* block */)a0;
- (void)truncateDatabaseWalWithCompletion:(id /* block */)a0;
- (void)authenticateWithUserID:(long long)a0 secUserID:(id)a1 identityToken:(id)a2 completion:(id /* block */)a3;
- (void)deauthenticateWithClearDB:(BOOL)a0 completion:(id /* block */)a1;
- (void)recoverAllDataWithUser:(long long)a0 completion:(id /* block */)a1;
- (void)renewIdentityToken:(id)a0 completion:(id /* block */)a1;
- (void)tokenInvalidNotification:(id)a0;
- (void)onAuthErrorNotification:(id)a0;
- (void)authenticateWithUserID:(long long)a0 secUserID:(id)a1 identityToken:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)authenticateWithUserID:(long long)a0 identityToken:(id)a1 completion:(id /* block */)a2;
- (void)authenticateWithUserID:(long long)a0 identityToken:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)deauthenticateWithCompletion:(id /* block */)a0;
- (void)countForQuery:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;
- (void)executeQuery:(id)a0 completion:(id /* block */)a1;

@end
