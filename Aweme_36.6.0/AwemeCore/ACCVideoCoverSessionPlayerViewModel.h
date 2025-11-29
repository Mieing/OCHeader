@class UIView, NSString, NSArray, ACCVideoCoverEditPlayerView, ACCImageAlbumEditor, NSMutableDictionary, ACCImageAlbumData, ACCImageAlbumPlayerPreviewExportManager;

@interface ACCVideoCoverSessionPlayerViewModel : NSObject <ACCVideoCoverEditPlayerViewDataSource, ACCVideoCoverSessionPlayerViewModelProtocol>

@property (retain, nonatomic) ACCImageAlbumEditor *imageEditor;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) ACCVideoCoverEditPlayerView *playerView;
@property (retain, nonatomic) ACCImageAlbumPlayerPreviewExportManager *exportManager;
@property (retain, nonatomic) NSMutableDictionary *activePlayerItemlPool;
@property (copy, nonatomic) NSArray *currentActivePlayerIndexes;
@property (nonatomic) BOOL enablePreviewPlaceholderOnceFlag;
@property (copy, nonatomic) NSString *lastReloadedItemId;
@property (nonatomic) BOOL didPlayerActived;
@property (nonatomic) BOOL skipExportImageFlag;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (readonly, nonatomic) BOOL isLowLevelDeviceOpt;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) id /* block */ onAllRenderOperationsCompleteHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ACCImageAlbumData *albumData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (copy, nonatomic) id /* block */ onCustomerContentViewRecovered;
@property (copy, nonatomic) id /* block */ onFirstImageEditorRendered;

- (void)resetWithContainerView:(id)a0;
- (long long)currentImageEditorIndex;
- (id)currentImageItemModel;
- (long long)totalImagePlayerImageCount;
- (void)reloadCurrentPlayerItem;
- (id)customerContentViewAtIndex:(long long)a0;
- (id)customerContentView;
- (BOOL)applyTemplateFile:(id)a0 diffJson:(id)a1;
- (id)getNeedDownloadedResource;
- (id)getNleWrapper;
- (id)getNleImageAlbumEditor;
- (void)updateOriginImageInfoForTemplate;
- (void)setPlayerCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateAlbumData:(id)a0;
- (id)initWithImageAlbumData:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isCoverToolsExperienceOpt1;
- (id)albumEditPlayerView:(id)a0 previewViewAtIndex:(long long)a1;
- (void)p_logInfoWithLogMsg:(id)a0 isError:(BOOL)a1;
- (void)p_setupImageEditorIfNeed;
- (void)p_setupExportManagerIfNeed;
- (void)p_setupInitActivePlayerItemPoolIfNeed;
- (void)markAllItemlPoolImageHasBeenModify;
- (void)p_updateActivePlayerItemsPoolWithPreloadIndexs:(id)a0;
- (id)p_imageItemStructAtIndex:(long long)a0;
- (void)p_removePlayerItemViewFromPool:(id)a0;
- (id)p_playerItemModelAtIndex:(long long)a0;
- (id)p_imageItemStructListFromIndexs:(id)a0;
- (id)p_imageItemIdListFromImageItemStructList:(id)a0;
- (id)p_creatPlayerItemModelWithItemStruct:(id)a0;
- (void)p_doRecoverCustomerContentViewWithPlayerItemModel:(id)a0 itemStruct:(id)a1;
- (void)p_exportAllNeedUpdatePlayerItemsFromItemsPool;
- (void)p_addReloadCurrentEditorOperationIfNeed;
- (void)p_addExportImageItemOperationsWithItemIdList:(id)a0;
- (id)p_imageItemStructWithItemId:(id)a0;
- (BOOL)p_isCurrentItemModel:(id)a0;
- (id)playerViewAtIndex:(long long)a0;
- (id)p_playerItemModelWithItemId:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;

@end
