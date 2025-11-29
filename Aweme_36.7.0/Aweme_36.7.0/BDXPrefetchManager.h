@class NSString, BDXThreadSafeDictionary, BDXPrefetchStorage, BDXPrefetchNetworkManager;

@interface BDXPrefetchManager : NSObject <BDXClearLocalStorageServiceProtocol>

@property (retain, nonatomic) BDXPrefetchNetworkManager *networkManager;
@property (retain, nonatomic) BDXPrefetchStorage *storage;
@property (retain, nonatomic) BDXThreadSafeDictionary *waitingRequestModel;
@property (retain, nonatomic) BDXThreadSafeDictionary *waitingStreamCallBack;
@property (retain, nonatomic) BDXThreadSafeDictionary *prefetchStateStorage;
@property (retain, nonatomic) BDXThreadSafeDictionary *prefetchCofigCache;
@property (retain, nonatomic) BDXThreadSafeDictionary *streamPrefetchResultCache;
@property (retain, nonatomic) BDXThreadSafeDictionary *prefetchConfigDataDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dataWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)dataWithRequestModel:(id)a0 dataCallback:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)shouldBlockBySecureVerify:(id)a0;
- (void)syncInjectPrefetchDataCache:(id)a0;
- (void)onTriggerClearData:(id)a0;
- (void)prefetchDataWithCardModel:(id)a0 Schema:(id)a1 config:(id)a2;
- (id)storageKeyWithSchema:(id)a0;
- (void)injectPrefetchDataCache:(id)a0 intoGlobalProps:(id)a1 fromSchema:(id)a2 isSync:(BOOL)a3;
- (void)requestPrefetchNetworkWithSchema:(id)a0 config:(id)a1 prefetchConfig:(id)a2 resFrom:(id)a3 cardModel:(id)a4;
- (void)clearCacheBeforeRequestIfNeeded:(id)a0;
- (BOOL)requestCacheMatch:(id)a0;
- (id)dicToJsonString:(id)a0;
- (void)__reportPrefetchMonitorWithRequestModel:(id)a0 cacheStauts:(unsigned long long)a1 errorMessage:(id)a2;
- (void)prefetchDataWithSchema:(id)a0 config:(id)a1;
- (void)removePrefetchDataForSchema:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
