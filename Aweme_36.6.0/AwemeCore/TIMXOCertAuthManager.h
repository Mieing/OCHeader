@class TIMXOCertAuthModel, NSString, TIMXSDKInstance, TIMXGCDTimer, NSObject;
@protocol OS_dispatch_queue, TIMXInstanceDispatchQueuePoolProtocol;

@interface TIMXOCertAuthManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXOCertAuthModel *wsCertAuthCache;
@property (retain, nonatomic) TIMXOCertAuthModel *httpCertAuthCache;
@property (nonatomic) double lastCachedTime;
@property (nonatomic) long long expiredTime;
@property (nonatomic) BOOL enableExtChange;
@property (nonatomic) BOOL isForeground;
@property (retain) TIMXGCDTimer *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedOperationQueue;
@property (retain, nonatomic) id<TIMXInstanceDispatchQueuePoolProtocol> queuePool;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (copy, nonatomic) NSString *httpBaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userDidLogin;
- (void)userDidLogout:(id)a0;
- (void)checkCertAuthCache:(id)a0;
- (void)p_cacheCertAuthForMessageSend;
- (void)p_setCertAuthForRequest:(id)a0 certAuth:(id)a1;
- (void)p_updateMsgExt:(id)a0 hitStatus:(id)a1;
- (void)generateCertAuth:(id)a0 path:(id)a1 baseURL:(id)a2 isWSRequest:(BOOL)a3;
- (void)cacheCertAuthForMessageSend;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
