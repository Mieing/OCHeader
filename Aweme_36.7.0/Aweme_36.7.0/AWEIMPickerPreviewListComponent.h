@class AWEIMPickerPreivewConfigration, NSString, UICollectionView;
@protocol AWEIMPickerAssetSelectedProcessInterface;

@interface AWEIMPickerPreviewListComponent : AWEIMComponentBase <UICollectionViewDataSource, UICollectionViewDelegate, AWEIMPickerPreviewSelectedListAction, AWEIMPickerAssetSelectedProcessAction, AWEIMAssetBrowserCollectionViewCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (retain, nonatomic) AWEIMPickerPreivewConfigration *previewConfig;
@property (nonatomic) BOOL isPureMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (id)currentPlayingCell;
- (id)previewVC;
- (void)didScrollToPage:(long long)a0;
- (void)onAssetProcessorDidEditAssetIdentifier:(id)a0;
- (void)didSingleTapAssetBrowserCell:(id)a0;
- (void)didFinishPlayOrPausePlay:(id)a0;
- (void)previewSelectedListCollectionViewDidSelected:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)createUI;

@end
