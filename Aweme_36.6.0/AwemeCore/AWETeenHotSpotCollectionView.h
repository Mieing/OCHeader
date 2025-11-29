@class AWETeenHotSpotDataController, NSString;

@interface AWETeenHotSpotCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWETeenHotSpotDataController *dataController;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isPresented;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ scrollBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateBottomMask;
- (BOOL)p_didScrollAtFist;
- (void)updateCurrentHotID:(id)a0 needFocus:(BOOL)a1;
- (double)contentHeight;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didDismiss;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)didPresent;

@end
