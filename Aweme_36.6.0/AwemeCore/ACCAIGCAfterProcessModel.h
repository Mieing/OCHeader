@class NSString, AWEAIGCLoraSyncCreatePictureBusinessCustomModel, IESEffectModel, NSNumber;
@protocol AWEEditKit, AEKMegaEditor, ACCSideslipPropService, ACCSideslipPropPanelService, ACCEditServiceProtocol;

@interface ACCAIGCAfterProcessModel : ACCEditViewModel <AWEStickerDownloadManagerObserverProtocol>

@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (copy, nonatomic) id /* block */ afterProcessJob;
@property (nonatomic) BOOL replaceSuccess;
@property (nonatomic) BOOL downloadEffectSuccess;
@property (retain, nonatomic) AWEAIGCLoraSyncCreatePictureBusinessCustomModel *businessModel;
@property (copy, nonatomic) id /* block */ afterEffectDownloadJob;
@property (copy, nonatomic) NSNumber *didGeneratedIEInfoDictNotReceiveResp;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) NSString *effectId;
@property (retain, nonatomic) NSString *effectExtra;
@property (nonatomic) BOOL willLeaveEditPage;
@property (nonatomic) BOOL needTransition;
@property (nonatomic) double videoDuration;
@property (copy, nonatomic) id /* block */ beforeMainTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (void)cancelCurrentApplyAfterProcessEffectId;
- (void)applyAfterProcessIfNeed;
- (void)checkEffectAndApplyEffectWith:(id)a0 beforeMainTrack:(id /* block */)a1 afterProcessJob:(id /* block */)a2;
- (BOOL)checkRunTimeIsSyncAfterProcess;
- (void)handleSetRenderCacheAigcContext;
- (id)getRenderCacheDictWith;
- (double)getBGMAudioTrackTotalDuration;
- (void)receiveIERespondMsgWith:(id)a0;
- (void)handleStartWithResponse:(id)a0;
- (void)handlePostProcessWithResponse:(id)a0;
- (void)handleServerResult;
- (long long)sendEffectMsg:(long long)a0 isGlobal:(BOOL)a1 arg1:(long long)a2 arg3Dic:(id)a3;
- (void)clearLastGeneratedInfoIfNeed;
- (void)bindDataModelFromDraftRecover;
- (void)updateProcessModelInfoWithOriginEffect:(id)a0 needGenerateSticker:(BOOL)a1;
- (BOOL)effectResourceHadDown;
- (void)recoverEffectFromSelectOriginIndex;
- (void)handleAfterProcessResponseWith:(id)a0;
- (void)handleAfterProcessResponseIsSupportNewAigcPipelineWith:(id)a0;
- (void)stickerManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
