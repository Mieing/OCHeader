@class NSString, AWEUITransitionHost;

@interface AWEVideoRouterDraftService : NSObject <AWEStudioDraftService, AWEStudioDraftUtilService>

@property (nonatomic) BOOL showDraftPopView;
@property (retain, nonatomic) AWEUITransitionHost *transitionHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;
+ (BOOL)ignorePublishPageForModel:(id)a0;

- (id)aAWEStudioGlobalConfig;
- (BOOL)handleDraftMigrateQRCodeString:(id)a0;
- (id)trackEnterFrom;
- (id)startWithDraft:(id)a0 isBackup:(BOOL)a1;
- (void)startWithBackUpIfNeed;
- (long long)draftCount;
- (BOOL)transitionStatusPendingDeleteWithDraftID:(id)a0 duration:(long long)a1 scene:(id)a2;
- (id)canvasAdaptor;
- (id)startWithDraft:(id)a0 isBackup:(BOOL)a1 modifyPublishModelBlock:(id /* block */)a2;
- (id)startWithDraft:(id)a0 isBackup:(BOOL)a1 modifyPublishModelBlock:(id /* block */)a2 showLoadingView:(BOOL)a3;
- (id)startWithDraft:(id)a0 isBackup:(BOOL)a1 destinationPage:(long long)a2 publishViewModelBuilt:(id /* block */)a3;
- (id)startWithDraft:(id)a0 publishModel:(id)a1 publishModelError:(id)a2;
- (id)tryMusicAgainWithDraft:(id)a0 modifyPublishModelBlock:(id /* block */)a1;
- (id)reshootWithInputData:(id)a0;
- (void)shootAgainWithDraft:(id)a0 modifyPublishModelBlock:(id /* block */)a1;
- (id)saveDraftWithSegmentedClipModel:(id)a0 publishViewModel:(id)a1 extraDict:(id)a2;
- (void)shootAgainFromBottomSnackBarWithDraftId:(id)a0 content:(id)a1 modifyPublishModel:(id /* block */)a2 extraAction:(id /* block */)a3 onClose:(id /* block */)a4;
- (BOOL)currentShowDraftBackUpView;
- (id)p_createRetrieveContext;
- (double)delayLoadingViewIfNeeded:(BOOL)a0 draft:(id)a1;
- (void)p_startWithDraft:(id)a0 isBackup:(BOOL)a1 publishModel:(id)a2 error:(id)a3 completion:(id /* block */)a4;
- (void)p_fixWrongBackupModel:(id)a0 attributes:(id)a1;
- (void)recoverImageSourceResolutionWith:(id)a0;
- (void)removeTemplateWithPublishModel:(id)a0;
- (void)removeEffectMusicWithPublishModel:(id)a0;
- (BOOL)directEnterPublishPageNonImageAlbumShortPathFromDraftByComposer:(id)a0;
- (void)enterPublishPageNonImageAlbumShortWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)trackEenterPublisherWithDraft:(id)a0 enterMethod:(id)a1 publishModel:(id)a2;
- (id)completeParamsWithDraft:(id)a0 PublishModel:(id)a1;
- (void)startWithDraft:(id)a0 isBackup:(BOOL)a1 publishModel:(id)a2 error:(id)a3 destPage:(long long)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
