@class UIView, NSString, UILongPressGestureRecognizer, UIScrollView, AWEHPTopTabEditCollectionViewCell, NSMutableArray, UICollectionView, NSIndexPath;

@interface AWEHPTopTabEditCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, AWEHPTopTabEditViewControllerProtocol>

@property (retain, nonatomic) NSMutableArray *topTabList;
@property (retain, nonatomic) UICollectionView *editCollectionView;
@property (nonatomic) double touchOffsetY;
@property (retain, nonatomic) AWEHPTopTabEditCollectionViewCell *selectedCell;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress;
@property (retain, nonatomic) UIView *dragSnapShot;
@property (retain, nonatomic) NSIndexPath *dragOriginalIndexPath;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL hasEdited;
@property (copy, nonatomic) id /* block */ showCannotMoveToast;

- (void)addLongPressGestureRecognizer;
- (id)p_getModelWithIndexPath:(id)a0;
- (long long)getLastFixedItemIndex;
- (double)getHotAreaPercent;
- (double)getTouchOffsetWithIndexPath:(id)a0 recognizer:(id)a1;
- (id)generateShadowedSnapShotViewWithCell:(id)a0;
- (void)updateTopTabList:(id)a0;
- (id)currentTabList;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)collectionView:(id)a0 targetIndexPathForMoveFromItemAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)createLayout;
- (void)scrollViewDidScroll:(id)a0;
- (long long)numberOfCells;
- (void)viewDidLoad;
- (void)handleLongPressGesture:(id)a0;
- (void)setUpUI;

@end
