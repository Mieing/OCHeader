@class IESECMallShopMomentListModel;

@interface IESECMallShopMomentDataStorage : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } straight_out_lock;
@property (retain, nonatomic) IESECMallShopMomentListModel *straightOutListModel;
@property (nonatomic) BOOL hasAsyncLoadCacheData;

+ (id)sharedStorage;

- (void)storageDictionary:(id)a0 forKey:(id)a1;
- (void)clearCacheData;
- (void)removeStorageForKey:(id)a0;
- (void)asyncLoadCacheFirstScreenDataWithReferString:(id)a0;
- (BOOL)checkDataValid:(id)a0 storageValue:(id)a1;
- (id)syncLoadCacheFirstScreenDataWithReferString:(id)a0;
- (void)storageBool:(BOOL)a0 forKey:(id)a1;
- (id)loadFirstScreenListModelWithReferString:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (void)dealloc;

@end
