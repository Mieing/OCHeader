@class NSString, NSDictionary, BDPTrackEventInfo, BDPUniqueID, NSObject;
@protocol OS_dispatch_queue;

@interface BDPAppLoadContext : NSObject {
    BOOL _didExecGetModelCallback;
    id /* block */ _delayGetPkgCompletionBlk;
}

@property (nonatomic) BOOL useExpiredCache;
@property (nonatomic) BOOL useInnerPkg;
@property (nonatomic) BOOL isTmg;
@property (readonly, nonatomic) BOOL isReleasedApp;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *versionType;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *ideToken;
@property (copy, nonatomic) NSString *latestVersionNum;
@property (copy, nonatomic) NSString *latestVersionTag;
@property (copy, nonatomic) NSString *startPagePath;
@property (nonatomic) long long minVersionCode;
@property (nonatomic) BOOL isSandBox;
@property (retain, nonatomic) BDPTrackEventInfo *trackInfo;
@property (copy, nonatomic) NSDictionary *customMetaInfo;
@property (copy, nonatomic) id /* block */ getModelCallback;
@property (copy, nonatomic) id /* block */ getPkgCompletion;
@property (copy, nonatomic) id /* block */ getUpdatedModelCallback;
@property (copy, nonatomic) id /* block */ getUpdatedPkgCompletion;
@property (copy, nonatomic) id /* block */ shouldDownloadPkgBlk;
@property (copy, nonatomic) id /* block */ metaValidateBlk;
@property (copy, nonatomic) id /* block */ renamePkgIfNeedBlk;
@property (copy, nonatomic) id /* block */ asyncDownloadUnityPkg;
@property (copy, nonatomic) id /* block */ md5InvalidNotifBlk;
@property (copy, nonatomic) id /* block */ updateAppRenderType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callBackQueue;
@property (nonatomic) void *callBackQueueKey;
@property (nonatomic) BOOL pkgDownloadWithODR;
@property (nonatomic) BOOL forceUpdateMeta;
@property (nonatomic) BOOL pkgFinishCallBackOnCurrentThread;
@property (copy, nonatomic) NSString *previewPluginId;
@property (copy, nonatomic) NSString *previewPluginVersion;

- (void)executeContextBlk:(id /* block */)a0;
- (void)triggerGetModelCallbackWithError:(id)a0 meta:(id)a1 reader:(id)a2;
- (void)triggerGetPkgCompletionWithError:(id)a0 meta:(id)a1;
- (void)triggerUpdateModelCallbackWithError:(id)a0 meta:(id)a1;
- (void)triggerUpdatePkgCallbackWithError:(id)a0 meta:(id)a1;
- (BOOL)containPreviewPluginInfo;
- (BOOL)isSameVersionType:(id)a0;
- (void).cxx_destruct;

@end
