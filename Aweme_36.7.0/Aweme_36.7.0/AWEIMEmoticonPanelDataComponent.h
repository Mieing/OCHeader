@class NSArray, NSString, UICollectionView;
@protocol AWEIMEmoticonTrackComponent, AWEIMEmoticonPanelSyncComponent;

@interface AWEIMEmoticonPanelDataComponent : AWEIMComponentBase <UICollectionViewDelegateFlowLayout, AWEIMEmoticonPanelDataComponent, UICollectionViewDataSource, UICollectionViewDelegate>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *listData;
@property (weak, nonatomic) id<AWEIMEmoticonTrackComponent> trackComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_scrollViewDidEndScroll:(id)a0;
- (void)updateWithListData:(id)a0;
- (void)reloadDataWithUniqueID:(id)a0;
- (void)allNeedsReloadViewModel;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
