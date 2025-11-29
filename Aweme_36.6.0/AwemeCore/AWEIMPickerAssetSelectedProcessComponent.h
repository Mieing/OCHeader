@class AWEIMPickerSelectedResults, NSMutableDictionary, NSString, AWEIMPickerConfiguration, NSLock;

@interface AWEIMPickerAssetSelectedProcessComponent : AWEIMComponentBase <AWEIMAssetListComponentAction, AWEIMPickerAssetSelectedProcessInterface, AWEIMPickerPreviewBottomToolPanelAction, AWEIMPickerOriginSelectComponentAction, AWEIMPickerPreviewSelectedListAction, AWEIMPickerPreviewNaviBarAction>

@property (retain, nonatomic) AWEIMPickerSelectedResults *selectedResults;
@property (retain, nonatomic) AWEIMPickerConfiguration *pickerConfig;
@property (nonatomic) BOOL didClickFinish;
@property (retain, nonatomic) NSMutableDictionary *resourceLoaders;
@property (nonatomic) double beginSelectTimestamp;
@property (retain, nonatomic) NSMutableDictionary *originImageDataMap;
@property (retain, nonatomic) NSMutableDictionary *nonOriginImageDataMap;
@property (retain, nonatomic) NSMutableDictionary *originImageSizeMap;
@property (retain, nonatomic) NSMutableDictionary *nonOriginImageSizeMap;
@property (retain, nonatomic) NSMutableDictionary *imageCoverDataMap;
@property (retain, nonatomic) NSMutableDictionary *imageCoverSizeMap;
@property (retain, nonatomic) NSLock *imageDataOrSizeMapLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)getSelectedLocalAssets;
- (BOOL)useOrigin;
- (void)dissmissEditPageWithSelectedCount:(long long)a0;
- (BOOL)shouldSendAsLivePhotoIdentifier:(id)a0;
- (id)phAssetForIdentify:(id)a0;
- (unsigned long long)indexOfAssetIdentifier:(id)a0;
- (BOOL)hasEditLivePhotoStatusIdentifier:(id)a0;
- (void)finishSelect;
- (id)pickerVC;
- (void)onPhotoPickerListBatchDeselectAssetsWithIdentifiers:(id)a0;
- (void)onPhotoPickerListDeselectAsset:(id)a0;
- (void)onPhotoPickerListSelectAsset:(id)a0;
- (void)onPhotoPickerListActiveLivePhotoMode:(id)a0;
- (void)onPhotoPickerListDeactiveLivePhotoMode:(id)a0;
- (void)onPhotoDefaultActiveLivePhotoWhenInit:(id)a0;
- (void)navibarDidReceiveEditResultWithPath:(id)a0 userInfo:(id)a1 associatedAsset:(id)a2;
- (void)moveSelectedItemFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)setSelectOrigin:(BOOL)a0;
- (void)p_initialiseSelectedLivePhoto;
- (void)p_initialiseSelectedResults;
- (void)photoPickerSelectedAssetsLoadComplete;
- (void)setupImageLocalAsset:(id)a0 selectLoadedObj:(id)a1 complete:(id /* block */)a2;
- (void)setupVideoLocalAsset:(id)a0 selectLoadedObj:(id)a1 complete:(id /* block */)a2;
- (void)trackFinishSelect;
- (void)selectLoadedObj:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (void)resetData;
- (id)selectedAssetIdentifiers;
- (id)editViewModel;

@end
