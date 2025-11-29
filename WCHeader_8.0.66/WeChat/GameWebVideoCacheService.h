@class NSString, WKHTTPCookieStore, NSRecursiveLock, NSMutableDictionary, WCTTable, GameURLSessionWrapper, SafeMutableDictionary, GameCenterCommonDb;

@interface GameWebVideoCacheService : MMUserService <ICdnComMgrExt, GameURLSessionWrapperDelegate, MMServiceProtocol> {
    NSRecursiveLock *m_lock;
}

@property (nonatomic) BOOL isPreloading;
@property (nonatomic) BOOL enablePartHit;
@property (retain, nonatomic) GameCenterCommonDb *gameCenterCommonDb;
@property (retain, nonatomic) WCTTable *videoCacheTable;
@property (retain, nonatomic) SafeMutableDictionary *curWebPreloadMediaDic;
@property (retain, nonatomic) GameURLSessionWrapper *urlSessionWrapper;
@property (weak, nonatomic) WKHTTPCookieStore *curWkCookieStore;
@property (retain, nonatomic) NSMutableDictionary *requestModelDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getNewUrlWithUrl:(id)a0 appendGameCacheIdentify:(id)a1;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (BOOL)isGameWebVideoCacheEnable;
- (BOOL)isVideoLoaderEnable;
- (id)mediaWrapFromRequest:(id)a0;
- (BOOL)loadVideoDataIfHasCacheByRequest:(id)a0 withCallback:(id /* block */)a1;
- (BOOL)loadVideoCacheByRequest:(id)a0 videoCacheIdentify:(id)a1 fromPath:(id)a2 withCallback:(id /* block */)a3;
- (BOOL)loadVideoDataIfInnerFetchWithRequest:(id)a0 withURLSchemeTask:(id)a1 cookieStore:(id)a2;
- (void)stopLoadVideoWithURLSchemeTask:(id)a0;
- (BOOL)recordVideoResponseCacheIfNeed:(id)a0 withOriginRequest:(id)a1;
- (void)checkIfHaveWaitingPreloadTask;
- (BOOL)hasResourcePreloadedByUrl:(id)a0;
- (void)cancelPreloadSchedule:(long long)a0;
- (void)schedulePreloadVideoResource:(id)a0 withMaxDelaySeconds:(long long)a1;
- (id)getWaitingPreloadResourceDateKey:(id)a0;
- (id)getResourcePreloadInfoFailedCountKey:(id)a0;
- (void)getResourcePreloadInfoWithUrl:(id)a0;
- (void)getResourcePreloadInfoFailedWithUrl:(id)a0 errorCode:(int)a1 errorMsg:(id)a2;
- (void)cleanPreloadInfoInMappedKV;
- (void)doPreloadScheduleVideoWithInfoResponse:(id)a0 andResourceUrl:(id)a1;
- (void)httpTestRangePreRequestWithVideoUrl:(id)a0 andIdentify:(id)a1;
- (id)currentResourcePreloadVideoIdentify;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getRangeFromString:(id)a0;
- (void)removeLocalInfoForVideoMediaWrap:(id)a0;
- (void)onWebPreloadVideoWithMediaWraps:(id)a0;
- (void)cleanTimeoutAndOverLimitVideoCache;
- (void)cleanTimeoutGameVideoCache;
- (void)didExitGameCenter;
- (void)removePreloadVideoFromQueueWithMediaWrap:(id)a0;
- (id)getMediaWrapFromVideoCacheInfo:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)handleCdnDownloadSuccess:(id)a0;
- (void)handleCdnDownloadFailed:(id)a0;
- (void)OnCdnVideoPreloadCompleted:(id)a0;
- (void)urlSessionWrapperWithTask:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2;
- (void)urlSessionWrapperWithTask:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)urlSessionWrapperWithTask:(id)a0 didCompleteWithError:(id)a1;
- (id)requestKeyFromSchemeTask:(id)a0;
- (id)requestModelFromSchemeTask:(id)a0;
- (void)debugTestToGetResourcePreloadInfoWithUrl:(id)a0 completeBlock:(id /* block */)a1;
- (id)webViewCookieStore;
- (void).cxx_destruct;

@end
