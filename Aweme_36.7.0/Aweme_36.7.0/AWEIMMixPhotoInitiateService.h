@class AWEIMMixPhotoStyleResponseModel, NSString, RxDeferred, NSNumber;

@interface AWEIMMixPhotoInitiateService : NSObject <AWEIMMixPhotoInitiateService>

@property (retain, nonatomic) RxDeferred *isReadyDeferred;
@property (retain, nonatomic) NSNumber *lastFetchTime;
@property (copy, nonatomic) AWEIMMixPhotoStyleResponseModel *cacheResponseModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)presentMixVCWithModel:(id)a0 extraParams:(id)a1;
- (id)viewModelForConversation:(id)a0 trackExtra:(id)a1;
- (void)presentWithViewModel:(id)a0;
- (id)updateIfNeedWithCon:(id)a0;
- (id)mountModelForCon:(id)a0 styleId:(id)a1;
- (id)syncGetMountModelForCon:(id)a0 styleId:(id)a1;
- (void)presentDetailViewControllerWithMessage:(id)a0;
- (void)initAWEIMMixPhotoStateCheckManager;
- (void)startMixPhotoWithStickerID:(id)a0 maxMember:(long long)a1 stickerCoverURL:(id)a2 isLora:(BOOL)a3;
- (void)startMixPhotoWithEffectInfo:(id)a0 context:(id)a1;
- (void)forwardLoraMixPhotoWithLoraTaskID:(id)a0 effectInfo:(id)a1 context:(id)a2;
- (void)handleMixPhotoEntanceRouterParams:(id)a0;
- (void)p_log:(id)a0;
- (id)p_mixPhotoInitiateData;
- (id)p_initiateDataForChatType:(unsigned long long)a0;
- (id)p_updateIfNeedWithCon:(id)a0 viewModel:(id)a1;
- (id)p_mixPhotoInitiateDataLastFetchTime;
- (id)p_initiateDatUpdateCacheTimeInterval;
- (id)p_needUpdateDataIgnoreInterval;
- (void)p_updateFetchDataVersion;
- (id)p_setLocalMixPhotoInitiateDataWithValue:(id)a0;
- (id)p_setLocalMixPhotoInitiateDataUpdateTimeIntervalWithValue:(long long)a0;
- (id)p_findMixPhotoMountModelForStyleId:(id)a0 inList:(id)a1;
- (id)p_mixPhotoInitiateDataCurrentVersion;
- (id)p_setLocalMixPhotoInitiateDataVersionWithValue:(id)a0;
- (id)p_mixPhotoInitiateDataLastVersion;
- (id)p_mixPhotoInitiateDataSettings;
- (id)p_localMixPhotoInitiateDataUpdateTimeInterval;
- (id)p_localMixPhotoInitiateData;
- (void).cxx_destruct;
- (id)isReady;
- (id)init;

@end
