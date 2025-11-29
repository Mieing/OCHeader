@class NSMutableDictionary, NSString, WAPackageDownloadPreConnectLogic, NSMutableSet, NSMutableArray;

@interface WAPackageDownloadUrlFetcher : MMUserService <MMServiceProtocol> {
    NSMutableArray *_arrFetching;
    NSMutableArray *_arrWaiting;
    NSMutableArray *_arrSeprateCGIInfoData;
}

@property (retain, nonatomic) NSMutableSet *setPreFetching;
@property (retain, nonatomic) NSMutableDictionary *dicPreFetchResult;
@property (retain, nonatomic) WAPackageDownloadPreConnectLogic *preConnectLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)a0;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)a0 predownloadScene:(unsigned int)a1;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoDataUseSeprateCGI:(id)a0;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoDataUseSeprateCGI:(id)a0 predownloadScene:(unsigned int)a1;
- (void)mainThread_getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)a0 predownloadScene:(unsigned int)a1;
- (BOOL)checkIsInFetchQueue:(id)a0;
- (BOOL)checkIsInWaitingQueue:(id)a0;
- (BOOL)checkIsInQueue:(id)a0 withInfoData:(id)a1;
- (void)removeInfoDataTask:(id)a0;
- (void)checkWaitingQueue;
- (id)fetchNextRequestInfoDatasFromWaitingQueue;
- (void)triggerPkgDownloadWithAppInfoDataList:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)handleGetPkgDownloadUrl:(id)a0;
- (BOOL)isMatchInfoData:(id)a0 andResponseItem:(id)a1;
- (void)sendDownloadUrlFetcherFail:(id)a0;
- (id)genPreFetchTokenForUsername:(id)a0;
- (void)markPreFetchingForUsername:(id)a0;
- (void)unmarkPreFetchingForUsername:(id)a0;
- (void)savePrefetchResult:(id)a0 forUsername:(id)a1;
- (void)removePrefetchInfoForUsername:(id)a0;
- (id)getPrefetchResultForUsername:(id)a0;
- (BOOL)isUsernameInPreFetchingWithUsername:(id)a0;
- (void)triggerPrefetchCDNPkgDownloadUrlForUsername:(id)a0 path:(id)a1 scene:(unsigned int)a2;
- (BOOL)checkIfHaveValidPrefetchCDNPkgDownloadUrlForUsername:(id)a0 appid:(id)a1 version:(unsigned int)a2;
- (void)handlePrefetchCDNPkgDownloadUrl:(id)a0;
- (id)getPrefetchCDNPkgDownloadInfoIfHaveForInfoData:(id)a0;
- (void).cxx_destruct;

@end
