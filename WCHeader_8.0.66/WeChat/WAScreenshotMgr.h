@class NSString, PHFetchResult, NSMutableDictionary, WAAppTask, NSMutableArray;

@interface WAScreenshotMgr : MMUserService <PHPhotoLibraryChangeObserver, MMServiceProtocol, WAAppTaskMgrExt> {
    NSMutableDictionary *_infoDic;
    NSMutableArray *_pendingInfoList;
    NSMutableArray *_hasShownGuideBubbleMsgSvrIdList;
}

@property (retain, nonatomic) PHFetchResult *screenshotAssetsFetchResult;
@property (weak, nonatomic) WAAppTask *cachedForegroundTaskOnScreenshotNotify;
@property (nonatomic) unsigned long long cachedScreenshotNotifyTimestamp;
@property (nonatomic) BOOL isScreenshotTakenBeforeWeAppDidAppear;
@property (nonatomic) BOOL hasRegisterPhotoLibraryChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)handleScreenshot:(id)a0;
- (BOOL)canRegisterPhotoLibraryChangeObserver;
- (void)updatePhotoLibraryChangeObserverRegisterStatus:(BOOL)a0;
- (void)initScreenshotFetchResult;
- (void)onServiceTerminate;
- (void)photoLibraryDidChange:(id)a0;
- (void)onNewScreenshotTaken:(id)a0 foregroundTask:(id)a1;
- (void)printAssetImageInfo:(id)a0;
- (id)getCurrentVisibleTaskWithCache;
- (id)getCurrentVisibleTaskWithCacheInMiliSec:(unsigned long long)a0;
- (id)getCurrentVisibleTaskByTaskMgr;
- (id)getScreenshotContextInfoWithAssetId:(id)a0;
- (id)getLastScreenshotContextInfoWithWebVC:(id)a0;
- (BOOL)hasPendingInfo;
- (void)recordMsgHasShownEnterWeAppGuideBubble:(long long)a0;
- (BOOL)hasMsgShownEnterWeAppGuideBubble:(long long)a0;
- (void)onFinishGetPathFromDeveloper:(id)a0 webVC:(id)a1;
- (void)loadScreenshotContextInfoDic;
- (void)saveScreenshotContextInfoDic;
- (id)screenshotContextInfoDicSavePath;
- (void)loadMsgHasShownGuideBubbleRecordList;
- (void)saveMsgHasShownGuideBubbleRecordList;
- (id)msgHasShownGuideBubbleRecordListSavePath;
- (BOOL)imageDataIsScreenshot:(id)a0;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)a0;
- (void).cxx_destruct;

@end
