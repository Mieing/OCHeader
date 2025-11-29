@class AWEEditerBeautyServiceImpl, ACCEditBeautyEffectServiceImpl;

@interface ACCEditBeautyEffectDownloadService : NSObject <ACCEditBeautyEffectDownloadService>

@property (retain, nonatomic) ACCEditBeautyEffectServiceImpl *beautyService;
@property (retain, nonatomic) AWEEditerBeautyServiceImpl *beautyNewService;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isTrackBeautifyLoadingFinishStatus;

- (id)p_generateBaseParamsDictWithPublishModel:(id)a0;
- (BOOL)isRequestedStatus;
- (void)downloadEditBeautyEffectResourceWithServiceProvider:(id)a0 repository:(id)a1 completeHandler:(id /* block */)a2;
- (id)beautyDataManager;
- (BOOL)isEnableRecordAndEidtBeautyConvergenceSwitchStatus;
- (void)downloadNewEditBeautyEffectResourceWithServiceProvider:(id)a0 repository:(id)a1 completeHandler:(id /* block */)a2;
- (void)downloadOldEditBeautyEffectResourceWithServiceProvider:(id)a0 repository:(id)a1 completeHandler:(id /* block */)a2;
- (void)requestBeautifulDataIfNeededWithCompleteHandler:(id /* block */)a0;
- (void)requestNewBeautifulDataIfNeededWithCompleteHandler:(id /* block */)a0;
- (void)handleUpdateSourceDownloadDataFinishWithSucceed:(BOOL)a0 completeHandler:(id /* block */)a1;
- (void)handleUpdateSourceDataFinishWithSucceed:(BOOL)a0 completeHandler:(id /* block */)a1;
- (void)handleNewUpdateSourceDataFinishWithSucceed:(BOOL)a0 completeHandler:(id /* block */)a1;
- (void)handleCommandUpdateSourceDataFinishWithSucceed:(BOOL)a0 useCacheStatus:(BOOL)a1 completeHandler:(id /* block */)a2;
- (void)handleNewCommandUpdateSourceDataFinishWithSucceed:(BOOL)a0 useCacheStatus:(BOOL)a1 completeHandler:(id /* block */)a2;
- (void)handleOldCommandUpdateSourceDataFinishWithSucceed:(BOOL)a0 useCacheStatus:(BOOL)a1 completeHandler:(id /* block */)a2;
- (void)trackBeautifyLoadingFinish:(id)a0 duration:(double)a1;
- (BOOL)isNewRequestedStatus;
- (BOOL)isOldRequestedStatus;
- (void)resetRequestedResource;
- (void).cxx_destruct;
- (id)dataManager;
- (void)dealloc;

@end
