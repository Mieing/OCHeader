@class NSArray, UICollectionView, NSString, UIScrollView;

@interface AWEHPBottomTabEditCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSArray *itemList;
@property (retain, nonatomic) UICollectionView *editCollectionView;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) id /* block */ didSelectedCellWithItemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelectedIndex:(long long)a0;
- (void)updatePanelThemeStyle:(long long)a0;
- (void)handleTabGesture:(id)a0;
- (void)clearAllCellSelectedWithCollectionView:(id)a0;
- (unsigned long long)p_generateCornerTypeWithItemIndex:(long long)a0 itemCount:(long long)a1;
- (void)updateItemList:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)numberOfCells;
- (void)viewDidLoad;
- (void)setUpUI;

@end
