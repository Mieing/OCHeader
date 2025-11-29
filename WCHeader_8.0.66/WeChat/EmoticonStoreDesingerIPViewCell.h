@class NSString, EmoticonLoadMoreFooterView, NSMutableSet, UICollectionViewFlowLayout, MMLoadMoreCollectionView, NSNumber;
@protocol EmoticonStoreDesingerIPViewCellDelegate;

@interface EmoticonStoreDesingerIPViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate>

@property (retain, nonatomic) MMLoadMoreCollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) EmoticonLoadMoreFooterView *loadMoreView;
@property (retain, nonatomic) NSMutableSet *lastVisibleItems;
@property (weak, nonatomic) id<EmoticonStoreDesingerIPViewCellDelegate> delegate;
@property (retain, nonatomic) NSNumber *designerUin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initViews;
- (void)onIPSetsUpdated;
- (id)ipSets;
- (void)checkVisibleItems;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)onLoadMore;
- (void)onLoadDone;
- (void)tabPageDidAppear;
- (void)tabPageDidDisappear;
- (void).cxx_destruct;

@end
