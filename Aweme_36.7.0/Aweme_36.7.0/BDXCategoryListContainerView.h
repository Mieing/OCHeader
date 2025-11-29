@class NSMutableDictionary, UICollectionView, BDXCategoryListContainerViewController, UIScrollView, NSString;
@protocol BDXCategoryListContainerViewDelegate;

@interface BDXCategoryListContainerView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, BDXCategoryViewListContainer>

@property (weak, nonatomic) id<BDXCategoryListContainerViewDelegate> delegate;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSMutableDictionary *validListDict;
@property (nonatomic) long long willAppearIndex;
@property (nonatomic) long long willDisappearIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) BDXCategoryListContainerViewController *containerVC;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) BOOL horizonScrollEnable;
@property (readonly, nonatomic) unsigned long long containerType;
@property (nonatomic) double initListPercent;
@property (nonatomic) BOOL bounces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentScrollView;
- (void)setLynxView:(id)a0;
- (void)setDefaultSelectedIndex:(long long)a0;
- (void)setGestureDirection:(int)a0;
- (void)didClickSelectedItemAtIndex:(long long)a0;
- (void)listWillAppear:(long long)a0;
- (void)listDidAppear:(long long)a0;
- (void)listWillDisappear:(long long)a0;
- (void)listDidDisappear:(long long)a0;
- (void)setGestureBeginOffset:(double)a0;
- (void)listDidAppearOrDisappear:(id)a0;
- (void)initListIfNeededAtIndex:(long long)a0;
- (BOOL)checkIndexValid:(long long)a0;
- (void)setinitListPercent:(double)a0;
- (void)setRTL:(BOOL)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)contentScrollView;
- (void)layoutSubviews;
- (void)initializeViews;
- (id)initWithType:(unsigned long long)a0 delegate:(id)a1;

@end
