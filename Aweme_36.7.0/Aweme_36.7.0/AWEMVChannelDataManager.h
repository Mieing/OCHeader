@class AWEMVDataPluginDispatcher, AWEMVChannelPageContext, NSString, AWEMVChannelDataControllerConfig;
@protocol AWEMVDataControllerProtocol, AWEMVDataManagerDelegate;

@interface AWEMVChannelDataManager : NSObject <AWEMVDataManagerProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *context;
@property (retain, nonatomic) AWEMVChannelDataControllerConfig *config;
@property (retain, nonatomic) id<AWEMVDataControllerProtocol> originDataController;
@property (nonatomic) BOOL refreshDataHadCame;
@property (weak, nonatomic) id<AWEMVDataManagerDelegate> delegate;
@property (readonly, nonatomic) AWEMVDataPluginDispatcher *pluginDispatcher;
@property (readonly, nonatomic) long long requestNums;
@property (readonly, nonatomic) BOOL isRequestOnAir;
@property (readonly, nonatomic) long long lastRequestCardCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)refreshDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)refreshDataWithRequestParams:(id)a0 useUnconsumedVideos:(BOOL)a1 unconsumedVideos:(id)a2 args:(id)a3 completion:(id /* block */)a4;
- (void)loadMoreDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)cancelRequestTask;
- (void)refreshHistoryWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 config:(id)a1;
- (void)fetchWithContext:(id)a0 completion:(id /* block */)a1;
- (void)cancelCurrentTaskIfNeed;
- (void)buildRequestParamsWith:(id)a0;
- (void)resetWhenLoginStatusChanged;
- (void)refreshAuthorListWithCompletion:(id /* block */)a0;
- (BOOL)shouldUseFirstRenderCache;
- (void)useFirstRenderCacheIfNeed:(id /* block */)a0;
- (id)sceneDataConfig;
- (void)addCacheDataIfNeededRefactor:(id /* block */)a0;
- (void)addFirstRenderCacheDataCompatibleWithInsert:(id)a0 completion:(id /* block */)a1;
- (void)addFirstRenderCacheData:(id)a0 completion:(id /* block */)a1 isFromPendingTask:(BOOL)a2;
- (void)tryAcquireCacheData:(id /* block */)a0;
- (void)handleFirstRenderCacheData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)dataSource;

@end
