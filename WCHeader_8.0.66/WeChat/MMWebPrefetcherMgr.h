@class NSString, MMPrefetcherGameCenterJSContext, NSURLSession, MMWebPrefetcherPkgDownloadTask, MMWebJsBasePkgInfo, MemoryMappedKV, MMWebOptimizationPrefetcher, NSMutableArray, MMWebPrefecherJsEngine;

@interface MMWebPrefetcherMgr : MMUserService <NSURLSessionTaskDelegate, MMServiceProtocol>

@property (retain, nonatomic) MMWebOptimizationPrefetcher *resourcePrefetcher;
@property (retain, nonatomic) NSMutableArray *downloadTaskArr;
@property (retain, nonatomic) MMWebJsBasePkgInfo *prefecherBasePkg;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) MMPrefetcherGameCenterJSContext *gameSingletonContext;
@property (retain, nonatomic) MemoryMappedKV *pkgFrequencyMappedKV;
@property (retain, nonatomic) MMWebPrefetcherPkgDownloadTask *adPkgDownloadTask;
@property (retain, nonatomic) MemoryMappedKV *exptMappedKV;
@property (retain, nonatomic) MMWebPrefecherJsEngine *jsEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)stateMonitorFor:(unsigned int)a0;
+ (void)workflowMonitorFor:(unsigned int)a0;
+ (void)contextReport:(unsigned int)a0;
+ (void)adOperateReport:(unsigned int)a0;
+ (void)stepReportForBizScene:(long long)a0 subBizScene:(long long)a1 url:(id)a2 step:(unsigned int)a3;
+ (void)stepReportForBizScene:(long long)a0 subBizScene:(long long)a1 url:(id)a2 step:(unsigned int)a3 isUsingNewJvm:(BOOL)a4;
+ (void)downloadReportForBizScene:(long long)a0 subBizScene:(long long)a1 ResType:(long long)a2 ResUrlorAppId:(id)a3 Action:(long long)a4 isUsingNewJvm:(BOOL)a5;
+ (id)getValidPkgInfoWithAppID:(id)a0 userName:(id)a1 localResName:(id)a2;
+ (id)gameCenterIdentifierForUrl:(id)a0;
+ (BOOL)isWebPrefetcherOpen;
+ (BOOL)isWebPrefetcherSingletonVmEnable;
+ (BOOL)isTimelineADPrefetcherOpen;
+ (BOOL)isGameCenterSwitchOpen;
+ (BOOL)isPkgDownloadUsePreDownloadEnable;
+ (unsigned int)mainCellExposedInterval;
+ (unsigned int)firstMainCellExposedDelaySec;
+ (unsigned int)codePkgDownloadInterval;

- (id)frequencyMappedKV;
- (id)getValidCodePkgPathWithAppId:(id)a0;
- (void)trigerPrefetchBasePrefetcherPkg;
- (void)trigerPrefetchADPrefetcherPkg;
- (void)trigerDownloadPkgWithAppId:(id)a0 username:(id)a1 callback:(id /* block */)a2;
- (void)releaseGameCenterContext;
- (void)onGameCenterUrlEntrenceExposedWithUrl:(id)a0 scene:(unsigned int)a1;
- (id)gameCenterJSContext;
- (id)mappedKV;
- (id)getTestAdInfo;
- (void)setAdTestInfoWithStr:(id)a0;
- (void)setAdTestInfoWithStr:(id)a0 key:(id)a1;
- (void)setAdTestInfoWithInt:(int)a0 key:(id)a1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupEngine;
- (void)releaseEngine;
- (void)dispatchEventToAdContext:(id)a0 extraData:(id)a1;
- (void)dispatchMainCellExposedEventWithScene:(long long)a0;
- (void)tryStartWebPrefechWithUrl:(id)a0 extInfo:(id)a1 scene:(unsigned int)a2 subScene:(unsigned int)a3 canRedirect:(BOOL)a4 httpHeader:(id)a5 config:(id)a6 callback:(id /* block */)a7;
- (void)doPrefetchWebResIfNeedForUrl:(id)a0 extInfo:(id)a1 scene:(unsigned int)a2 subScene:(unsigned int)a3 canRedirect:(BOOL)a4 httpHeader:(id)a5 config:(id)a6 callback:(id /* block */)a7;
- (void)setupURLSession;
- (void).cxx_destruct;

@end
