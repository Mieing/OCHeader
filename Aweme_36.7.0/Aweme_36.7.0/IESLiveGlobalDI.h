@class Protocol;
@protocol HTSKVStore, IESLiveEnvironment, IESLiveSettings, IESLiveAppInfo;

@interface IESLiveGlobalDI : IESLiveDI {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rw_lock;
}

@property (weak, nonatomic) id<IESLiveSettings> liveSettings;
@property (weak, nonatomic) id<HTSKVStore> kvStore;
@property (weak, nonatomic) id debugService;
@property (weak, nonatomic) id<IESLiveEnvironment> environment;
@property (weak, nonatomic) id<IESLiveAppInfo> appInfo;
@property (weak, nonatomic) id userService;
@property (retain, nonatomic) Protocol *debugServiceProtocol;
@property (retain, nonatomic) Protocol *userServiceProtocol;

- (id)cacheObjectWithProtocol:(id)a0;
- (id)getLiveSettings;
- (id)getKvStore;
- (id)getDebugService;
- (id)getUserService;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getEnvironment;
- (id)getAppInfo;

@end
