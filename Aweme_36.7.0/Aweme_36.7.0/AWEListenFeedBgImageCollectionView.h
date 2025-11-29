@class NSString, AWEListenFeedBaseCollectionView;
@protocol AWEListenFeedBgImageCollectionViewDelegate, AWEListenFeedBgImageCollectionViewDataSource;

@interface AWEListenFeedBgImageCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEListenFeedBaseCollectionView *collectionView;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long currentIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } priviousBounds;
@property (nonatomic) long long lastIndex;
@property (weak, nonatomic) id<AWEListenFeedBgImageCollectionViewDataSource> dataSource;
@property (weak, nonatomic) id<AWEListenFeedBgImageCollectionViewDelegate> delegate;
@property (nonatomic) BOOL padNeedUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollDidEnd;
- (id)dequeueReusableCellWithClass:(Class)a0 forIndexPath:(id)a1;
- (void)registerCellClass:(Class)a0;
- (double)caculateOffsetXAtIndex:(long long)a0;
- (void)scrollToItemAtIndex:(long long)a0 animate:(BOOL)a1;
- (void)scrollViewDidEnd:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)cellForItemAtIndexPath:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)resetLayout;
- (void)setupUI;
- (void)updateData;

@end
