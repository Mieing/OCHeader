@class AWEIMSearchBar, NSArray, UICollectionView, NSString, UIView;
@protocol AWEIMSearchViewDelegate;

@interface AWEIMSearchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *shareModelArray;
@property (nonatomic) unsigned long long cachedDataSourceCount;
@property (weak, nonatomic) id<AWEIMSearchViewDelegate> delegate;
@property (retain, nonatomic) AWEIMSearchBar *searchBar;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishSearch;
- (void)endInputText;
- (void)updateShareModelArray:(id)a0 reloadDirectly:(BOOL)a1;
- (void)p_updateSearchBarUI;
- (id)currentShareModelArray;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
