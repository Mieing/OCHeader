@class BDPPageIndicator, NSArray, UICollectionView, NSString, NSLayoutConstraint, BDPUniqueID;

@interface AWEPluginMorePanelImpl : NSObject <BDPAwemeMorePanelPluginDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, AWEMorePanelCellDelegate>

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPPageIndicator *pageIndicator;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) long long pageCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getUniqueID;
- (void)event:(id)a0 param:(id)a1;
- (id)bdp_getMorePanelViewWithItems:(id)a0 WithUniqueID:(id)a1;
- (void)setupItems:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;

@end
