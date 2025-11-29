@class WAContact, WAThreadSafeMutableDictionary;

@interface WAColdLaunchPreFetchCGILogic : NSObject

@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) WAThreadSafeMutableDictionary *cache;
@property (retain, nonatomic) WAThreadSafeMutableDictionary *fetchType2Observers;

- (id)initWithContact:(id)a0;
- (void)asyncDoPreFetchPrivateData;
- (BOOL)singlePrefetchCallBytes:(id)a0 hasType:(unsigned int)a1;
- (BOOL)batchPrefetchBusiFlag:(unsigned int)a0 hasType:(unsigned int)a1;
- (void)processSinglePrefetch:(id)a0;
- (void)processBatchPrefetch:(unsigned int)a0 whiteListBytes:(unsigned int)a1;
- (void)sendColdStartFetchDataRequest:(id)a0;
- (void)handleColdStartPreFetchDataResponse:(id)a0;
- (void)onColdStartPreFetchRequestFailed:(id)a0;
- (void)markFetchingWithFetchType:(unsigned int)a0;
- (void)onGetRemoteDataRet:(BOOL)a0 fetchType:(unsigned int)a1 respData:(id)a2;
- (void)clearCacheDataForFetchType:(unsigned int)a0;
- (void)clearAllCacheData;
- (void)getColdLaunchPreFetchCGIDataWithFetchType:(unsigned int)a0 completion:(id /* block */)a1;
- (void)observeFetchType:(unsigned int)a0 byCompletion:(id /* block */)a1;
- (void)notifyDidFetchResult:(id)a0 forFetchType:(unsigned int)a1;
- (id)getResLogic;
- (id)generateGetUserPrivacyAuthInfoFetchItem;
- (id)generateGetPassThroughInfoFetchItem;
- (id)generateGetSettingAuthInfoFetchItem;
- (void).cxx_destruct;

@end
