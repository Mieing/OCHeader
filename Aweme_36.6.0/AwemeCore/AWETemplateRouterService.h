@class NSString, AWEMusicModel, IESEffectModel, ACCRecordViewControllerInputData;
@protocol AWEStudioLoadTemplateResourceViewModelService;

@interface AWETemplateRouterService : NSObject <AWEStudioTemplateService>

@property (retain, nonatomic) id<AWEStudioLoadTemplateResourceViewModelService> templateResourceViewModel;
@property (copy, nonatomic) NSString *mv_template_extra;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) AWEMusicModel *musicModel;
@property (copy, nonatomic) id /* block */ mv_syntheticCompletedHandler;
@property (nonatomic) BOOL cancelRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadMVTemplateResourceWithMVID:(id)a0;
- (void)preloadMusicWithMusicId:(id)a0;
- (id)clientSyntheticVideoWithMVID:(id)a0 mv_template_extra:(id)a1 extraDict:(id)a2;
- (void)p_loadMVTemplateResourceIfNeedWithTemplateId:(id)a0 preload:(BOOL)a1;
- (void)p_loadMusicResourceIfNeedWithMusicId:(id)a0 preload:(BOOL)a1;
- (void)p_resourceLoadingTimeoutEvent;
- (double)p_getTimeoutMax;
- (void)p_cratePublishViewModel;
- (void)p_updatePublishViewModelWithTrackParamsWithParams:(id)a0;
- (void)p_createMVEditModel;
- (void)p_cancelAllOperation;
- (void)p_reloadInitializationEffectPlatformManager;
- (void)p_processCompletedWithResult:(BOOL)a0 error:(id)a1 preload:(BOOL)a2;
- (void)p_mvJumpToEditPageWithModel:(id)a0 videoData:(id)a1;
- (void).cxx_destruct;

@end
