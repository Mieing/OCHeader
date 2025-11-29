@class NSMutableDictionary, UICollectionView, NSString, UIScrollView, BDXPagerListContainerViewController;
@protocol BDXPagerListContainerViewDelegate;

@interface BDXPagerListContainerView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) id<BDXPagerListContainerViewDelegate> delegate;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSMutableDictionary *validListDict;
@property (nonatomic) long long willAppearIndex;
@property (nonatomic) long long willDisappearIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) BDXPagerListContainerViewController *containerVC;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) BOOL enableDynamicPages;
@property (readonly, nonatomic) unsigned long long containerType;
@property (nonatomic) double initListPercent;
@property (nonatomic, getter=isCategoryNestPagingEnabled) BOOL categoryNestPagingEnabled;
@property (nonatomic) BOOL horizonScrollEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDefaultSelectedIndex:(long long)a0;
- (void)setGestureDirection:(int)a0;
- (void)didClickSelectedItemAtIndex:(long long)a0;
- (void)listWillAppear:(long long)a0;
- (void)listDidAppear:(long long)a0;
- (void)listWillDisappear:(long long)a0;
- (void)listDidDisappear:(long long)a0;
- (void)listDidAppearOrDisappear:(id)a0;
- (void)initListIfNeededAtIndex:(long long)a0;
- (BOOL)checkIndexValid:(long long)a0;
- (void)setinitListPercent:(double)a0;
- (void)enableDynamicPage;
- (void)scrollingFromLeftIndex:(long long)a0 toRightIndex:(long long)a1 ratio:(double)a2 selectedIndex:(long long)a3;
- (void)setRTL:(BOOL)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)contentScrollView;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)initializeViews;
- (id)initWithType:(unsigned long long)a0 delegate:(id)a1;

@end
