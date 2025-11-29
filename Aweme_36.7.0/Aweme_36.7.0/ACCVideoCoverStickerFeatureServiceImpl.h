@class NSString, AWEVideoPublishViewModel, ACCStickerContainerView, ACCImageAlbumItemModel;
@protocol ACCStickerServiceProtocol, IESServiceProvider, ACCVideoCoverEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCVideoCoverStickerFeatureServiceImpl : NSObject <ACCEditVideoCoverMixedMessageProtocol, ACCStickerContainerDelegate, ACCImageAlbumFeatureServiceProtocol, ACCImageAlbumStickerFeatureServiceProtocol>

@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCImageAlbumItemModel *currentImageItemModel;
@property (retain, nonatomic) ACCStickerContainerView *containerView;
@property (weak, nonatomic) id<ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL ignoreMaskRadiusForXScreen;
@property (nonatomic) BOOL needAdaptScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } standPlayerFrame;
@property (copy, nonatomic) id /* block */ onCreatedStickerContainerView;
@property (copy, nonatomic) id /* block */ didTapBlankExcludeSticker;

- (id)mediaContainerView;
- (id)containerConfig;
- (void)resetStickerInPlayer;
- (void)setStickersForReady;
- (void)bindServices:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)setImagePlayerScrollEnable:(BOOL)a0;
- (long long)currentImageEditorIndex;
- (long long)totalImagePlayerImageCount;
- (void)reloadCurrentPlayerItem;
- (void)startAutoPlayWithKey:(id)a0;
- (void)stopAutoPlayWithKey:(id)a0;
- (void)onCurrentImageEditorChanged:(long long)a0;
- (void)onImageEditorRecoveredAtIndex:(long long)a0 contentView:(id)a1 imageItem:(id)a2 imageLayerSize:(struct CGSize { double x0; double x1; })a3 originalImageLayerSize:(struct CGSize { double x0; double x1; })a4;
- (void)onImageEditorPreviewModeChangedAtContentView:(id)a0 isPreviewMode:(BOOL)a1;
- (void)onImagePlayerWillScrollToIndex:(long long)a0 withAnimation:(BOOL)a1 isByAutoTimer:(BOOL)a2;
- (void)onImagePlayerWillReloadData;
- (void)stickerContainer:(id)a0 gestureStarted:(id)a1 onView:(id)a2;
- (void)stickerContainer:(id)a0 gestureEnded:(id)a1 onView:(id)a2;
- (BOOL)stickerContainerTapBlank:(id)a0 gesture:(id)a1;
- (double)mediaContainerScaleFactor;
- (void)readyForPublish;
- (id)dependences;
- (void)saveCurrentStickersToPublishModel;
- (void)integrationStickerInPlayer;
- (void)handlePublishServiceWillStart;
- (id)currentStickerContainerView;
- (void)installDependences;
- (void)installDependencesDidComplete;
- (void)updateCurrentStickerContainerWithImageIndex:(long long)a0;
- (BOOL)shouldChangeAlbumImagePluginsWithMaterialSize;
- (BOOL)shouldRemovePreViewPlugin;
- (Class)safeAreaViewClass;
- (id)getCoverSafeAreaMaskViewForStickerContainer:(id)a0;
- (void)setCurrentRootView:(id)a0 stickerContainer:(id)a1 stickerContainerIndex:(long long)a2;
- (id)createSimStickerContainer;
- (void).cxx_destruct;
- (long long)hierarchyLevel;

@end
