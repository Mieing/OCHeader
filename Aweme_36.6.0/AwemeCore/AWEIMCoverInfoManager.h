@class NSObject, NSMutableDictionary, AWEIMDouyinRedPacketDataManager;
@protocol OS_dispatch_queue;

@interface AWEIMCoverInfoManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *coverInfoMap;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *manager;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;
@property (retain, nonatomic) NSMutableDictionary *rawCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;

+ (id)shareInstance;

- (void)getCoverInfoWithCoverID:(id)a0 fromCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_preloadCache;
- (void)fetchCoverListWithCompletion:(id /* block */)a0;
- (void)coverLog:(id)a0;
- (BOOL)p_shouldSaveCache:(id)a0;
- (void)p_saveCoverInfo:(id)a0;
- (id)p_getAllDefaultModelCache;
- (void)cacheInfo:(id)a0;
- (void)setDefaultCoverModel:(id)a0;
- (id)getDefaultCoverModel;
- (void)clearCoverWithId:(id)a0;
- (void)recordKey:(id)a0;
- (void)p_showCount;
- (void)removeKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
