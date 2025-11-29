@class UIView, NSTimer, NSArray, ACCGenericTemplateMusicBeatsTaskManager, ACCGenericTemplatePreprocessTaskManager, ACCGenericTemplateTextParamManager, ACCGenericTemplateTTSTaskManager, AWEGenericTemplateAIGCTaskManager, AWEVideoPublishViewModel, CKGenericTemplateModel, NPGenericTemplateService_OC, AWEAlbumTemplateFollowShootTipManager;
@protocol ACCProcessViewProtcol;

@interface ACCGenericTemplateAlbumHandler : ACCGenericTemplateUnifyAlbumHandler

@property (retain, nonatomic) AWEGenericTemplateAIGCTaskManager *templateAIGCTaskManager;
@property (retain, nonatomic) ACCGenericTemplatePreprocessTaskManager *preprocessTaskManager;
@property (retain, nonatomic) ACCGenericTemplateTTSTaskManager *ttsTaskManager;
@property (retain, nonatomic) ACCGenericTemplateTextParamManager *textParamTaskManager;
@property (retain, nonatomic) ACCGenericTemplateMusicBeatsTaskManager *musicBeatsTaskManager;
@property (retain, nonatomic) AWEAlbumTemplateFollowShootTipManager *followShootTipManager;
@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *progressView;
@property (retain, nonatomic) NSTimer *progressUpdateTimer;
@property (nonatomic) long long progress;
@property (nonatomic) BOOL hasExecutedActionFlow;
@property (retain, nonatomic) NSArray *userFillArr;
@property (nonatomic) BOOL isUserCancel;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) CKGenericTemplateModel *templateModel;
@property (weak, nonatomic) NPGenericTemplateService_OC *service;

- (void)startProgressView;
- (BOOL)checkAllAssetsInCropedIDs:(id)a0 oneClickModel:(id)a1;
- (void)handleClickAlbumNextActionFlowWithPublishModel:(id)a0 templateModel:(id)a1 assets:(id)a2 service:(id)a3 placeholderBlock:(id /* block */)a4 loadingVC:(id)a5 completion:(id /* block */)a6 isAnnualMemories:(BOOL)a7;
- (void)handleFailureWithError:(id)a0 toast:(id)a1;
- (void)fillPublishModel:(id)a0 templateModel:(id)a1 assets:(id)a2;
- (void)fillPublishModelBeforeEnteringEditPage:(id)a0;
- (void)applyTemplate:(id)a0 service:(id)a1 publishModel:(id)a2 completion:(id /* block */)a3;
- (void)getUserAvatarWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)dismissProgressView;
- (void)enterEditWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)updateProgressViewWithProgress:(long long)a0;
- (void)fillAssets:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
- (void)startWithDownloadTemplateResourceFilesIfNeeded:(id)a0 service:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)reportLastTemplateInfoToSlardarWithTemplateId:(id)a0 templateType:(unsigned long long)a1 publishModel:(id)a2;
- (void)handleCancelProgress;
- (void)startProgressUpdateTimer;
- (void)removeProgressUpdateTimer;
- (void)increaseProgress;
- (void)cancelGenericTemplate;
- (void)handleClickAlbumNextActionWithPublishModel:(id)a0 templateModel:(id)a1 assets:(id)a2 service:(id)a3 trackParams:(id)a4 loadingVC:(id)a5 placeholderBlock:(id /* block */)a6 completion:(id /* block */)a7;
- (void).cxx_destruct;

@end
