@class NSArray, NSString, UICollectionView;

@interface AWETeenDiscoverLoadingView : UIView <AWETeenWaterfallCollectionViewLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *coverCellRatioArray;
@property (nonatomic) long long channelIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 layout:(id)a1 columnCountForSection:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumColumnSpacingForSectionAtIndex:(long long)a2;
- (id)initWithChannelIndex:(long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
