@class AWEAIGCLegacyBusinessContext, NSString, ACCAIGCPointsTaskHelper, IESEffectModel;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol, AWEAIGCLegacyBusinessLegacyLoadingProtocol, AWEAIGCLegacyBusinessAfterProcessProtocol;

@interface AWEAIGCLegacyBusinessLegacyLora : NSObject <AWEAIGCLegacyBusinessLegacyLoraProtocol>

@property (retain, nonatomic) AWEAIGCLegacyBusinessContext *context;
@property (nonatomic) BOOL isRequestSyncRenderImages;
@property (retain, nonatomic) IESEffectModel *ugcBeforeRequestEffect;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) ACCAIGCPointsTaskHelper *taskHelper;
@property (nonatomic) BOOL didShowAIAssetTextAnimating;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessAfterProcessProtocol> afterProcess;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessLegacyLoadingProtocol> loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickGainAIAssetButtonWithType:(long long)a0;
- (void)updateLoadingViewSubtitleWith:(long long)a0 type:(unsigned long long)a1;
- (void)retryTask;
- (BOOL)isHitLoraAsyncAllInSync;
- (void)syncBindRepoInfoWithIMAigcAsyncInfoDictIfNeed;
- (void)clearResourceWhenUnmount;
- (void)showTaskPanelIfNeededWith:(id)a0 consumeAssetAmount:(long long)a1 enterType:(id)a2;
- (void)startLongConnectionAIAssetTask;
- (void)doTaskForAIAssetNotEnough:(long long)a0 enterType:(id)a1;
- (void)handleReopenCustomKeywordsPageIfNeededWithExitType:(long long)a0;
- (void)cancelTaskAndTrack;
- (void)transferTaskToAsync;
- (void)handleTransferAsyncTaskAndDismissLoadingInIM:(id)a0 unifyResult:(id)a1;
- (long long)multiLoraEstimateGeneratingTime;
- (void)checkAIAssetWithCompletion:(id /* block */)a0;
- (id)loraSyncViewModel;
- (void)requestSyncRenderImages;
- (void)resetRequestMark;
- (void)updateAIAssetNotEnoughUIWith:(BOOL)a0 consumeAssetAmount:(long long)a1;
- (void)requestSyncRenderImagesAfterAIAssetCheckPassed;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)repository;
- (void)cancelTask;

@end
