@class NSObject, NSString, BDPSensitiveWordsTrackerContext, BDPClientAIDetectionModel, BDPSensitiveWordsDiffPatchExecutor, BDPUniqueID, BDPClientAIDetecionConfig;
@protocol OS_dispatch_queue;

@interface BDPSensitiveWordsService : NSObject <BDPClientAIDetectionMessage> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _sessionRWLock;
    BOOL _hasTriggerPreloadSecurityContext;
    BOOL _isCheckSensitiveWordEnable;
    BOOL _hasSecurityNewerResource;
    BOOL _isLoadingResource;
    BOOL _isLoadingEncodedKey;
    BOOL _hasCheckSensitiveWordEncodedKey;
    BDPUniqueID *_uniqueID;
    BDPSensitiveWordsTrackerContext *_trackerContext;
    NSObject<OS_dispatch_queue> *_checkWordQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    unsigned long long _warningLevel;
    BDPSensitiveWordsDiffPatchExecutor *_diffPatchExecutor;
    BDPClientAIDetectionModel *_detectionModel;
}

@property (retain, nonatomic) BDPClientAIDetecionConfig *detectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)updateRelativeDataIfNeed;
+ (void)bootstrapLaunch;
+ (id)sharedService;

- (id)load:(id)a0 sessionID:(id)a1;
- (void)save:(id)a0 data:(id)a1 sessionId:(id)a2;
- (void)bdpDetection_updateSettingInfo:(id)a0 force:(BOOL)a1;
- (void)bdpDetection_updateDetectionInfo:(id)a0;
- (void)bdpDetection_appPreloadHasBeenTriggeredWithInfos:(id)a0;
- (void)bdpDetection_applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)bdpDetection_onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCheck:(BOOL)a3;
- (void)bdpDetection_PageWillLeave:(id)a0 duration:(double)a1 pageURL:(id)a2 uniqueID:(id)a3;
- (BOOL)checkIsLoadingSource;
- (BOOL)isSecurityRuntimeServiceEnable;
- (void)checkMainMapNodeValueForFrontedData:(id)a0 completion:(id /* block */)a1;
- (id)searchSensitiveWordForString:(id)a0 metrix:(id *)a1 error:(id *)a2;
- (id)decodeAndMaskSensitiveWordsInString:(id)a0 regexKeyList:(id)a1 metrix:(id *)a2;
- (BOOL)checkHyperLinkEnable;
- (void)checkHyperLinkFromClipBoard:(id)a0;
- (void)prepareSecurityEnvironmentIfNeeded:(BOOL)a0;
- (void)registerMemoryWarningObserver;
- (BOOL)isSecurityABTestEnable;
- (void)preloadSecurityRuntimeContextWithNeedCleanTag:(BOOL)a0;
- (void)prepareSecurityEnvironment:(id)a0 schema:(id)a1;
- (void)p_excuteDownloadWithAllowedList:(id)a0 originWordList:(id)a1 userId:(id)a2;
- (BOOL)p_checkFileNameIsInForbiddenVersions:(id)a0;
- (void)didReceiveSystemMemoryWarning:(id)a0;
- (void)checkMainMapNodeValueForFrontedData:(id)a0 fromScene:(unsigned short)a1 textFrom:(id)a2 pageUrl:(id)a3 completion:(id /* block */)a4;
- (id)buildStarStringWithLength:(long long)a0;
- (void)p_screenShotAndUploadImageForUniqueID:(id)a0 pageURL:(id)a1 completion:(id /* block */)a2;
- (void)p_saveNewestSecurityMetaForWordList:(id)a0 appIdAllowedList:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
