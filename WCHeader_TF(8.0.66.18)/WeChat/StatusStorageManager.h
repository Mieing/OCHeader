@class ConcurrentDictionary, NSMapTable;

@interface StatusStorageManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
    ConcurrentDictionary *testBlockDict;
    ConcurrentDictionary *initIconConfigBlockDict;
    ConcurrentDictionary *cleanExpireDBBlockDict;
    NSMapTable *statusInfoChangeEventMap;
    NSMapTable *statusCommentChangeEventMap;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)testAsync:(id)a0 completion:(id /* block */)a1;
- (void)testAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)initWithRootDirUserNameClientVersionIsDebugMediaDirPath:(id)a0 userName:(id)a1 clientVersion:(int)a2 isDebug:(BOOL)a3 mediaDirPath:(id)a4;
- (void)constructStatusInfoCache;
- (id)getAllCacheStatsInfo;
- (void)updateConfig:(id)a0;
- (void)initIconConfigAsync:(id)a0 completion:(id /* block */)a1;
- (void)initIconConfigAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)cleanExpireDBAsync:(long long)a0 deleteFlag:(BOOL)a1 keepSelf:(BOOL)a2 completion:(id /* block */)a3;
- (void)cleanExpireDBAsync:(long long)a0 deleteFlag:(BOOL)a1 keepSelf:(BOOL)a2 on:(id)a3 completion:(id /* block */)a4;
- (id)insertOrReplaceInfo:(id)a0;
- (id)selectStatusInfoWithUsername:(id)a0 offset:(int)a1 count:(int)a2 timeMsLimit:(long long)a3;
- (id)selectStatusInfoWithId:(id)a0;
- (id)selectStatusInfo:(id)a0;
- (id)deleteStatusInfoWithId:(id)a0 sequence:(int)a1;
- (id)deleteStatusInfoWithUsername:(id)a0 sequence:(int)a1;
- (id)deleteTempStatusInfo:(id)a0 createTime:(long long)a1 sequence:(int)a2;
- (id)updateStatusInteractData:(id)a0 interactData:(id)a1;
- (id)updateStatusPrivateData:(id)a0 privateInfoData:(id)a1;
- (id)deleteLocalPublishStatusInfo:(id)a0;
- (BOOL)markReadUserLatestStatus:(id)a0;
- (BOOL)setKV:(id)a0 value:(int)a1;
- (int)getKV:(id)a0 defValue:(int)a1;
- (void)subscribeStatusInfoChangeEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeStatusInfoChangeEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unSubscribeStatusInfoChangeEvent:(id)a0;
- (void)subscribeStatusCommentChangeEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeStatusCommentChangeEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unSubscribeStatusCommentChangeEvent:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
