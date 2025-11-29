@class UIImage, OMJImageMaskStyle, UIView;
@protocol OMJImageSessionDelegate;

@interface OMJImageSession : NSObject {
    struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } __val_; } ; BOOL __engaged_; } _windowName;
    OMJImageMaskStyle *_imageMaskStyle;
}

@property (readonly, nonatomic) struct SharedPtr<XISImageSessionLite> { struct XISImageSessionLite *_ptr; } backingSession;
@property (readonly, nonatomic) struct SharedPtr<XISImageEditingModel> { struct XISImageEditingModel *_ptr; } backingImageEditingModel;
@property (nonatomic) struct SharedPtr<XMJMaterialManager> { struct XMJMaterialManager *_ptr; } materialManager;
@property (nonatomic) struct SharedPtr<XMJCamTemplateResourceManager> { struct XMJCamTemplateResourceManager *_ptr; } templateManager;
@property (nonatomic) struct SharedPtr<XISImageWindowCon> { struct XISImageWindowCon *_ptr; } windowCon;
@property (weak, nonatomic) UIView *renderView;
@property (nonatomic) BOOL isHandleBoxEnabled;
@property (retain, nonatomic) UIImage *currentImageFrame;
@property (weak, nonatomic) id<OMJImageSessionDelegate> delegate;
@property (copy, nonatomic) id /* block */ handleBoxSettingsDidChangeFunc;

- (id)mj_layerWithID:(id)a0;
- (id)mj_currentAspectRatio;
- (id)initWithBackingSession:(const void *)a0 materialManager:(const void *)a1 templateManager:(const void *)a2;
- (void)registerNotification;
- (void)dealloc;
- (void)registerCurrentImageFrameDidChangeFunc;
- (void)registerHandleBoxSettingsDidChangeNotification;
- (BOOL)bindRenderView:(id)a0 error:(id *)a1;
- (void)unbindRenderView;
- (void)destroyWindowCon;
- (void)startupWithRenderView:(id)a0 assetInfos:(id)a1 imageMaskStyle:(id)a2 settings:(id)a3 completionHandler:(id /* block */)a4;
- (void)_prepareAssetInfos:(id)a0 completionHandler:(id /* block */)a1;
- (void)_startupWithRenderView:(id)a0 backingAssetInfos:(const void *)a1 imageMaskStyle:(id)a2 settings:(id)a3 completionHandler:(id /* block */)a4;
- (void)teardownWithCompletionHandler:(id /* block */)a0;
- (void)commitUpdateWithCompletionHandler:(id /* block */)a0;
- (void)commitUpdateWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)isTemplateLoadedWithMetaData:(id)a0;
- (void)loadTemplateWithMetaData:(id)a0 loadPriority:(long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)applyTemplateWithID:(id)a0;
- (BOOL)clearTemplate;
- (id)getCurrentTemplateID;
- (struct CGPoint { double x0; double x1; })calcRenderPointForViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })calcViewPointForRenderPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })calcViewPointForHandleBoxPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)layerIDAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)layerIDAtLocation:(struct CGPoint { double x0; double x1; })a0 hitTestInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)enableHandleBox;
- (void)disableHandleBox;
- (void)updateHandleBoxEnabled:(BOOL)a0;
- (void)showHandleBoxForLayer:(id)a0 items:(id)a1 titles:(id)a2 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 borderStyle:(id)a4;
- (void)addHandleBoxTitleWithCorner:(int)a0 textOverlayDesc:(id)a1;
- (void)addHandleBoxButtonWithCorner:(int)a0 buttonImage:(const void *)a1 buttonImageSize:(const void *)a2;
- (void)removeHandleBox;
- (void)removeAllHandleBoxButtons;
- (void)removeAllHandleBoxTitles;
- (void)configHandleBoxWithRenderNodeID:(const void *)a0 enabledRectCornerBits:(unsigned int)a1 edgeInsets:(const void *)a2 isHandleBoxEnabled:(BOOL)a3 borderStyleDesc:(const void *)a4;
- (struct SharedPtr<XISImageEditingModel> { struct XISImageEditingModel *x0; })backingEditingModel;
- (id)imageSceneWithID:(id)a0;
- (id)imageScenes;
- (id)currentScene;
- (BOOL)switchSceneWithID:(id)a0;
- (void)addScenesWithAssetInfos:(id)a0 switchToSceneWithAsset:(id)a1 completionHandler:(id /* block */)a2;
- (id)getBackingAssetInfoLocalIdArray;
- (BOOL)removeSceneWithID:(id)a0 switchToSceneWithID:(id)a1;
- (void)handleThumbnailDidLoad:(struct XISLiteThumbnailInfo { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct SharedPtr<XIKImage> { struct XIKImage *x0; } x1; })a0;
- (BOOL)moveSceneWithID:(id)a0 beforeSceneWithID:(id)a1;
- (void)startPlayingWithAudioEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)startPlayingWithAudioEnabled:(BOOL)a0 previewLoopCount:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)stopPlayingWithShouldSkipTriggerRefresh:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)startExportingWithOutputDirectoryPath:(id)a0 imageExportSettings:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
