@class NSMutableDictionary, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface WAPreDownloadMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_dicAppID2PreDownloadHandler;
    NSMutableDictionary *_dicAppID2PreResUrls;
    NSMutableDictionary *_dicUrl2PreResResult;
    NSMutableDictionary *_dicAppID2CoverImageURL;
    NSString *_appId;
}

@property (retain) NSNumber *_hasDownloadedFileNum;
@property (retain) NSNumber *_hasDownloadedSubPackageNum;
@property (retain) NSNumber *_bothDownloadedFileNum;
@property (retain) NSMutableDictionary *moduleCacheVersionCheckers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initStatis;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)a0 appVersion:(unsigned long long)a1 context:(id)a2;
- (void)downloadPreResources:(id)a0 pkgconfig:(id)a1 reses:(id)a2 subpkgs:(id)a3 instanceId:(id)a4;
- (void)downloadSubPackage:(id)a0 pkgconfig:(id)a1 module:(id)a2 instanceId:(id)a3;
- (void)downloadFile:(id)a0 url:(id)a1 context:(id)a2 contact:(id)a3;
- (void)preDownloadFilesNoCheck:(id)a0 appId:(id)a1 appVersion:(unsigned int)a2;
- (void)downloadFileNoCheck:(id)a0 appId:(id)a1 appVersion:(unsigned int)a2;
- (void)downloadFileWithAppID:(id)a0 appVersion:(unsigned long long)a1 isIgnoreCheckDomain:(BOOL)a2 taskID:(id)a3 url:(id)a4 httpHeaders:(id)a5 context:(id)a6 completionHandler:(id /* block */)a7;
- (void)removeUrl:(id)a0 url:(id)a1;
- (BOOL)isDownloadingOrPreDownloaded:(id)a0 url:(id)a1;
- (id)getDownloadHandler:(id)a0;
- (void)interruptDownloadHandlerWithAppID:(id)a0;
- (void)clearDownloadHandlerWithAppID:(id)a0;
- (void)clearPreResourcesWithAppID:(id)a0;
- (void)clearWithAppID:(id)a0;
- (void)clear;
- (void)clearAllDownloadHandler;
- (void)clearAllPreResources;
- (void)onAppTaskTerminate:(id)a0;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)a0;
- (void)setCoverImageURL:(id)a0 appID:(id)a1;
- (id)getCoverImageURL:(id)a0;
- (void)clearCoverImage:(id)a0;
- (void)joinMainScene;
- (void)beforeInjectUserScript:(unsigned long long)a0;
- (void)startUpTime;
- (void)downloadPkgForAppid:(id)a0 username:(id)a1 debugModeType:(unsigned int)a2 completeHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end
