@class NSString, IESEffectConfig, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESEffectRemoteAssetInfoFetcher : NSObject

@property (retain, nonatomic) NSMutableArray *fullFetchCompletionArray;
@property (getter=isFetchingFullAssetInfo) BOOL fetchingFullAssetInfo;
@property (getter=isFetchFullAssetInfoSuccess) BOOL fetchFullAssetInfoSuccess;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialFetchQueue;
@property (retain, nonatomic) NSString *latestVersion;
@property (weak, nonatomic) IESEffectConfig *config;

+ (id)defaultFetcher;

- (void)addCompletionSafe:(id /* block */)a0;
- (void)getLatestRemoteAssetInfoListModelVersion;
- (void)callCompletionSafeWithResultError:(id)a0;
- (void)insertAssetInfoToMemoryWithResponseModel:(id)a0;
- (void)saveToCacheWithRemoteAssetInfoInfoListModel:(id)a0;
- (void)internalFetchRemoteAssetInfoListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchFullRemoteAssetInfoListWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)fetchRemoteAssetInfoListWithIDList:(id)a0 extraParameters:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
