@class ConcurrentDictionary, NSMapTable;

@interface AffNewLifeMentionManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
    ConcurrentDictionary *initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenBlockDict;
    NSMapTable *dataChangeEventMap;
    ConcurrentDictionary *insertBlockDict;
    ConcurrentDictionary *deleteByIdBlockDict;
    ConcurrentDictionary *updateByIdBlockDict;
    ConcurrentDictionary *getByIdBlockDict;
    ConcurrentDictionary *getBeforeTimeLimitBlockDict;
    ConcurrentDictionary *getAfterTimeCreateBlockDict;
    ConcurrentDictionary *getLastBufferBlockDict;
    ConcurrentDictionary *updateLastBufferBlockDict;
    ConcurrentDictionary *updateLastestMentionReadIdBlockDict;
    ConcurrentDictionary *getUnreadMentionListBlockDict;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenAsync:(id)a0 uin:(id)a1 finderUsername:(id)a2 clientVersion:(int)a3 isStandalone:(BOOL)a4 isDebug:(BOOL)a5 resetData:(BOOL)a6 adOpen:(BOOL)a7 completion:(id /* block */)a8;
- (void)initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenAsync:(id)a0 uin:(id)a1 finderUsername:(id)a2 clientVersion:(int)a3 isStandalone:(BOOL)a4 isDebug:(BOOL)a5 resetData:(BOOL)a6 adOpen:(BOOL)a7 on:(id)a8 completion:(id /* block */)a9;
- (void)subscribeDataChangeEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeDataChangeEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unSubscribeDataChangeEvent:(id)a0;
- (void)insertAsync:(id)a0 finderUsername:(id)a1 completion:(id /* block */)a2;
- (void)insertAsync:(id)a0 finderUsername:(id)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)deleteByIdAsync:(id)a0 id:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)deleteByIdAsync:(id)a0 id:(unsigned long long)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)updateByIdAsync:(id)a0 mentionInfo:(id)a1 id:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateByIdAsync:(id)a0 mentionInfo:(id)a1 id:(unsigned long long)a2 on:(id)a3 completion:(id /* block */)a4;
- (void)getByIdAsync:(id)a0 id:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getByIdAsync:(id)a0 id:(unsigned long long)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)getBeforeTimeLimitAsync:(id)a0 limit:(int)a1 mentionType:(int)a2 id:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)getBeforeTimeLimitAsync:(id)a0 limit:(int)a1 mentionType:(int)a2 id:(unsigned long long)a3 on:(id)a4 completion:(id /* block */)a5;
- (void)getAfterTimeCreateAsync:(id)a0 createTime:(int)a1 id:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)getAfterTimeCreateAsync:(id)a0 createTime:(int)a1 id:(unsigned long long)a2 on:(id)a3 completion:(id /* block */)a4;
- (void)getLastBufferAsync:(id)a0 mentionType:(int)a1 completion:(id /* block */)a2;
- (void)getLastBufferAsync:(id)a0 mentionType:(int)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)updateLastBufferAsync:(id)a0 mentionType:(int)a1 lastBuffer:(id)a2 completion:(id /* block */)a3;
- (void)updateLastBufferAsync:(id)a0 mentionType:(int)a1 lastBuffer:(id)a2 on:(id)a3 completion:(id /* block */)a4;
- (void)updateLastestMentionReadIdAsync:(id)a0 mentionType:(int)a1 id:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateLastestMentionReadIdAsync:(id)a0 mentionType:(int)a1 id:(unsigned long long)a2 on:(id)a3 completion:(id /* block */)a4;
- (void)getUnreadMentionListAsync:(id)a0 mentionType:(int)a1 completion:(id /* block */)a2;
- (void)getUnreadMentionListAsync:(id)a0 mentionType:(int)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
