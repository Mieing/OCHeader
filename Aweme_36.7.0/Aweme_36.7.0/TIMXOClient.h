@class NSString, TIMXSDKInstance;

@interface TIMXOClient : NSObject <TIMXTokenUpdater, TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) BOOL isInited;
@property (readonly, nonatomic) long long currentUserID;
@property (copy, nonatomic) NSString *storeCipherKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithConfig:(id)a0;
+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;
+ (id)gitHash;
+ (id)version;
+ (id)buildNumber;

- (void)logoutWithCompletion:(id /* block */)a0;
- (void)loginWithUserID:(long long)a0 secUserID:(id)a1 token:(id)a2 completion:(id /* block */)a3;
- (void)p_handleTokenInvalidNotification:(id)a0;
- (void)updateToken:(id)a0 forUser:(long long)a1 withCompletion:(id /* block */)a2;
- (void)loginWithUserID:(long long)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
