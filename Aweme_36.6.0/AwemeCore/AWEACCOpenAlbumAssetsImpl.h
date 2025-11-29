@class AWETranslationTransitionController, ACCAIGCReferenceMediaAlbumHelperExtension, ACCAIGCLoraAlbumHelperExtension, ACCAlbumImageAlbumNoteExtension, ACCAIGCSingleReferenceMediaAlbumExtension, NSString, ACCCanvasAdaptor;

@interface AWEACCOpenAlbumAssetsImpl : NSObject <ACCOpenAlbumAssetsProtocol>

@property (retain, nonatomic) ACCCanvasAdaptor *canvasAdaptor;
@property (retain, nonatomic) AWETranslationTransitionController *nextTranslationTransitionDelegate;
@property (retain, nonatomic) ACCAIGCLoraAlbumHelperExtension *loraPlugin;
@property (retain, nonatomic) ACCAlbumImageAlbumNoteExtension *noteEntranceExtension;
@property (retain, nonatomic) ACCAIGCReferenceMediaAlbumHelperExtension *referenceMediaAlbumExtension;
@property (retain, nonatomic) ACCAIGCSingleReferenceMediaAlbumExtension *aigcSingleReferenceMediaAlbumExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAlbumWithConfigure:(id)a0 bizName:(id)a1 callerBiz:(id)a2 extraInfo:(id)a3 trackerInfoInject:(id /* block */)a4 completion:(id /* block */)a5;
- (void)openAlbumWithConfigure:(id)a0 bizName:(id)a1 callerBiz:(id)a2 extraInfo:(id)a3 completion:(id /* block */)a4;
- (void)importAssetsWithPublishViewModel:(id)a0 WithAssets:(id)a1 completion:(id /* block */)a2;
- (void)enterEditorPage:(id)a0 fliePaths:(id)a1 completion:(id /* block */)a2;
- (id)getLoraPluginWith:(id)a0;
- (id)getReferenceMediaAlbumExtensionWith:(id)a0;
- (id)getAIGCSingleReferenceMediaAlbumExtensionWith:(id)a0;
- (id)getNoteExtension;
- (id)getLoraHeaderViewExtensionWithUseLoraBlock:(id /* block */)a0 loraProfileDidSelectBlock:(id /* block */)a1;
- (id)getIndicatorExtension;
- (id)getILASDKExtension;
- (void)saveWorkspace:(id)a0 video:(id)a1 scene:(long long)a2 isUserAction:(BOOL)a3 completion:(id /* block */)a4;
- (id)startEditorWith:(id)a0 fliePaths:(id)a1 completion:(id /* block */)a2;
- (void)buildEditorWithImagePathList:(id)a0 repoContainer:(id)a1 onCompletion:(id /* block */)a2;
- (void)handlePhoto2VideoenterEditorPageCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
