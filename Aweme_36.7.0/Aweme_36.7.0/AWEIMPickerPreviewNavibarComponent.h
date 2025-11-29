@class NSString, AWEIMPhotoBrowserNavView, PHAsset, AWEIMPickerPreivewConfigration;
@protocol AWEIMPickerAssetSelectedProcessInterface;

@interface AWEIMPickerPreviewNavibarComponent : AWEIMComponentBase <AWEIMPickerAssetSelectedProcessAction, AWEIMPickerPreviewListAction, AWEIMPickerPreviewNaviBarInterface>

@property (retain, nonatomic) AWEIMPhotoBrowserNavView *navView;
@property (nonatomic) BOOL shouldForbidSelect;
@property (retain, nonatomic) PHAsset *assetToEdit;
@property (retain, nonatomic) AWEIMPickerPreivewConfigration *previewConfig;
@property (retain, nonatomic) id<AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)previewVC;
- (void)jumpToEditPage;
- (void)onAssetProcessorDidSelectAssetIdentifier:(id)a0;
- (void)onAssetProcessorDidRemoveAssetIdentifier:(id)a0;
- (void)onAssetProcessorSelectedOrderDidChanged;
- (void)onReceiveEditedMediaWithPath:(id)a0 userInfo:(id)a1;
- (id)p_imModelForAsset:(id)a0;
- (id)p_sourceModelForAsset:(id)a0;
- (BOOL)selectAsset:(id)a0;
- (void)collectionViewWillBeginDragging:(id)a0;
- (void)collectionViewidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didScrollToIndex:(long long)a1;
- (void)collectionView:(id)a0 didTapCell:(id)a1 isPureMode:(BOOL)a2;
- (void)collectionView:(id)a0 videoCellDidEndPlaying:(id)a1;
- (void)updateNaviStatus;
- (BOOL)shouldSelectAsset:(id)a0;
- (void)pushMediaEditorViewControllerWithAsset:(id)a0;
- (void).cxx_destruct;
- (void)setNavigationBarHidden:(BOOL)a0;
- (void)editButtonPressed:(id)a0;
- (void)createUI;
- (void)layoutUI;

@end
