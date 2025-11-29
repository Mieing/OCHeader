@class NSArray, UICollectionView, NSString, NSIndexPath;

@interface AWESearchAdImmersiveBannerListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWESearchAdImmersiveBannerListViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSIndexPath *currentSelectedIndexPath;
@property (copy, nonatomic) NSArray *imageList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(long long)a0 animation:(BOOL)a1;
- (long long)redirectIndexPathWith:(long long)a0;
- (id)realIndexPathWith:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupSubviews;
- (void)updateWith:(id)a0;

@end
