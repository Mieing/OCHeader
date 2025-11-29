@class NSArray, UICollectionView, NSString, UIView;
@protocol AWERelatedVideoMultiTabListViewDelegate;

@interface AWERelatedVideoMultiTabListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *bottomLine;
@property (copy, nonatomic) NSArray *tagList;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<AWERelatedVideoMultiTabListViewDelegate> delegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectedIndex:(long long)a0;
- (void)updateWithTagList:(id)a0 selectedIndex:(long long)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
