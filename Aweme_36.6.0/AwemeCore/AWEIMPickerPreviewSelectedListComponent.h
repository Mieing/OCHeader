@class NSString, UICollectionView, UIView, AWEIMPickerPreivewConfigration;
@protocol AWEIMPickerAssetSelectedProcessInterface;

@interface AWEIMPickerPreviewSelectedListComponent : AWEIMComponentBase <UICollectionViewDataSource, UICollectionViewDelegate, AWEIMPickerPreviewListAction, AWEIMPickerAssetSelectedProcessAction>

@property (retain, nonatomic) UIView *selectedListContainer;
@property (retain, nonatomic) UIView *bottomView;
@property (copy, nonatomic) NSString *currentIdentifier;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMPickerPreivewConfigration *previewConfig;
@property (retain, nonatomic) id<AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)setContainerHidden:(BOOL)a0;
- (id)previewVC;
- (void)longPressGestureAction:(id)a0;
- (void)onAssetProcessorDidSelectAssetIdentifier:(id)a0;
- (void)onAssetProcessorDidRemoveAssetIdentifier:(id)a0;
- (void)onAssetProcessorDidEditAssetIdentifier:(id)a0;
- (void)setDisplayingIdentifier:(id)a0;
- (void)deleteButtonPressed:(id)a0;
- (void)collectionViewWillBeginDragging:(id)a0;
- (void)collectionViewidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didScrollToIndex:(long long)a1;
- (void)collectionView:(id)a0 didTapCell:(id)a1 isPureMode:(BOOL)a2;
- (void)collectionView:(id)a0 videoCellDidEndPlaying:(id)a1;
- (void)updateSelectedState:(BOOL)a0 cell:(id)a1 indexPath:(id)a2;
- (void)refreshVisibleStatus;
- (id)cellFromIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)createUI;
- (void)layoutUI;

@end
