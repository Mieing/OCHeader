@class NSString;

@interface AWEStudioEditVCFactoryImpl : NSObject <AWEStudioEditVCFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getAWEStudioVideoEditViewControllerClass;
- (id)enterEditViewControllerWithInputData:(id)a0 originalPublishModel:(id)a1;
- (id)getStickerMigrantsClasses;
- (Class)getACCShareLiveToStoryStickerViewClass;
- (Class)getAWEVideoEffectChooseViewControllerClass;
- (Class)getAWECoverEditUtilsClass;
- (id)buildAWEStudioVideoEditCoverVCWithInputData:(id)a0;
- (Class)getAWEVideoEditMusicStickerViewControllerClass;
- (id)buildAWEFeedQuickFlashFullPageViewController;
- (id)buildAWEStudioVideoEditVCWithInputData:(id)a0;
- (id)buildACCMusicPickerVCWithViewModel:(id)a0;
- (id)buildAWENewVideoCoverChooseVCWithModel:(id)a0 editService:(id)a1;
- (id)buildACCTextStickerEditViewWithOptions:(unsigned long long)a0 fromTextMode:(BOOL)a1 publishViewModel:(id)a2;
- (id)buildAWEStoryToolBarWithType:(long long)a0;
- (BOOL)openMoreMusicPageWithContainer:(id)a0;
- (BOOL)dismissSearchMusicHistoryViewWithContainer:(id)a0;
- (id)buildAWEAudioClipFeatureManager;
- (id)buildACCResourcesUploadService;
- (id)buildACCRecorderTextModeStickerContainerConfig;
- (id)buildACCRecorderStickerContainerConfig;
- (id)buildACCStickerContainerConfig;
- (id)buildACCQuickFlashStickerHandlerWithPublishModel:(id)a0;
- (id)buildACCVideoCommentStickerHandler;
- (id)buildACCHashTagStickerHandlerWithPublishModel:(id)a0;
- (id)buildACCVideoEditMusicViewModelWithViewModelType:(unsigned long long)a0;
- (id)buildAWENewVideoCoverAIRecommendManagerWithViewModel:(id)a0 editService:(id)a1;
- (Class)getNewVideoCoverAIRecommendManagerClass;
- (id)buildACCStickerDisplayManagerWithStickerContainer:(id)a0;
- (id)buildACCEditorAssemblerComponentWithServiceProvider:(id)a0;
- (id)buildACCMusicBizComponentWithServiceContainer:(id)a0;
- (id)buildACCStickerDisplayContainerConfig;
- (id)buildACCMusicPickerCreationBizWithMusicPicker:(id)a0 musicViewModel:(id)a1;
- (Class)getAWEASSSearchMusicViewControllerClass;
- (Class)getACCVideoCommentStickerHandlerClass;
- (Class)getACCVideoEditMusicViewModelClass;
- (Class)getACCStickerPluginConfigClass;
- (Class)getACCStickerAdsorbingViewClass;
- (Class)getACCStickerAngleAdsorbingPluginClass;
- (Class)getACCEditorPicTemplateTrackerClass;
- (Class)getACCMusicBizHelperClass;
- (id)getEditComponentClassesNeedsResourceRecover;

@end
