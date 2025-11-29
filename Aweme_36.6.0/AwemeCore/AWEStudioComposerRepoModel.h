@class AWEDTOCreationModel, NSArray, NSString, ACCConfigContainer, AWEStudioComposerBizTempModel, NSDictionary, NSMutableSet, ASCFeatureCustomizationInternalHandler, AWEStudioComposerEditPageConfig;
@protocol ACCWorkspaceReader, AWEStudioComposerFlowManager, ACCRepoDataContext, AWEStudioComposerBizTempModelProtocol;

@interface AWEStudioComposerRepoModel : MTLModel <ACCRepoRegister, ACCRepoModelDraftProtocol, ACCRepositoryRequestParamsDeprecated, ACCCreationDataAccess, AWEStudioComposerFlowManagerDataSource, ACCConfigContainerDataSource, ACCRepoPrepareComposerData>

@property (retain, nonatomic) AWEDTOCreationModel *DTOModel;
@property (retain, nonatomic) ACCConfigContainer *configContainer;
@property (retain, nonatomic) NSMutableSet *extensionModelClasses;
@property (retain, nonatomic) ASCFeatureCustomizationInternalHandler *featureCustomizationHandler;
@property (retain, nonatomic) AWEStudioComposerEditPageConfig *unsafe_currentEditPageConfig;
@property (readonly, nonatomic) id<AWEStudioComposerFlowManager> flowManager;
@property (readonly, nonatomic) AWEStudioComposerBizTempModel *composerBizTempModel;
@property (copy, nonatomic) NSArray *editorConfigs;
@property (nonatomic) long long composerType;
@property (copy, nonatomic) NSDictionary *createAwemeParams;
@property (nonatomic) BOOL disableResourceAdd;
@property (nonatomic) BOOL autoDisplayEditorPreview;
@property (copy, nonatomic) NSString *passthoughEffectId;
@property (copy, nonatomic) NSString *passthoughOriginalEffectId;
@property (retain, nonatomic) NSDictionary *exchangeRedPacket;
@property (nonatomic) BOOL disableResourceRemove;
@property (nonatomic) BOOL disableToastAfterPublish;
@property (nonatomic) BOOL disableAddVideo;
@property (nonatomic) BOOL hasSetEditorEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;
@property (readonly, nonatomic) id<AWEStudioComposerBizTempModelProtocol> composerBizTempData;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (id)readOnlyApiModel;
- (BOOL)isPublishFlow;
- (id)unsafe_cameraCustomization;
- (BOOL)shouldEnterEditPageWhenRecordPageOrAlbumPageFinished;
- (BOOL)isUltraCreation;
- (BOOL)isParameterCreation;
- (BOOL)checkOnceAutoDisplayEditorPreview;
- (id)cameraCustomizationIdentifier;
- (id)aigcNoticeCreativeModel;
- (id)nativeConfigForClass:(Class)a0;
- (id)nativeConfigs;
- (void)setNativeConfigByClass:(id)a0;
- (id)acc_publishRequestParams:(id)a0;
- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)unsafe_scenarioConfig;
- (id)nativeMVConfig;
- (id)nativeAlbumInputConfig;
- (id)nativePicTemplateConfig;
- (id)nativeTextOnImageConfig;
- (id)composer_draftFolder;
- (id)flow_creationID;
- (id)flow_shootWay;
- (void)setupReadOnlyApiModel:(id)a0 cameraCustomization:(id)a1;
- (void)resetCameraCustomization;
- (id /* block */)composerFinishCallback;
- (void)markExtensionModelClass:(Class)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
