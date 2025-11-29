@class NSArray, UICollectionView, NSString, AWENewPublishAnchorDetailView;

@interface AWENewPublishAggregateAnchorTableViewCell : AWENewPublishAnchorTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWENewPublishAnchorDetailView *anchorDetailView;
@property (retain, nonatomic) UICollectionView *recommendCollectionView;
@property (retain, nonatomic) NSArray *recommendAnchorInfos;
@property (copy, nonatomic) id /* block */ didClickRecommendAnchorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubviewsForContentView;
- (void)updateWithRecommendAnchorInfos:(id)a0 showRecommendView:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
