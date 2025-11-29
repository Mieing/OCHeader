@class NSArray, UICollectionViewLayout, NSString;
@protocol AWEShareCollectionViewHostView;

@interface AWEShareCollectionView : UICollectionView <AWEShareView, UICollectionViewDelegate, UICollectionViewDataSource, AWEShareCollectionViewProtocol>

@property (class, readonly, nonatomic) Class cellClass;
@property (class, readonly, nonatomic) UICollectionViewLayout *collectionLayout;

@property (weak, nonatomic) id<AWEShareCollectionViewHostView> hostView;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long preferredItemStyle;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemWithType:(id)a0;
- (BOOL)reloadCellForItemWithType:(id)a0;
- (BOOL)scrollToCellForItemWithType:(id)a0;
- (BOOL)isCellVisibleForItemWithType:(id)a0;
- (id)cellForItemWithType:(id)a0;
- (id)initWithItems:(id)a0 hostView:(id)a1;
- (id)indexPathForItemWithType:(id)a0;
- (void)sendEvents:(unsigned long long)a0 toItemAtIndexPath:(id)a1;
- (void)updateCell:(id)a0 withItem:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
