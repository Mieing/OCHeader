@class NSString, NSMutableDictionary, AWEIMTabIndicatorViewConfig, UICollectionView, UIView, UIScrollView, NSNumber;
@protocol AWEIMTabIndicatorViewDelegate, AWEIMTabIndicatorViewDataSource;

@interface AWEIMTabIndicatorView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESIMTabIndicatorViewProtocol>

@property (retain, nonatomic) AWEIMTabIndicatorViewConfig *config;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *indicator;
@property (retain, nonatomic) NSMutableDictionary *itemTotalWidthCache;
@property (retain, nonatomic) NSMutableDictionary *itemWidthCache;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) long long lastSelectedIndex;
@property (weak, nonatomic) id<AWEIMTabIndicatorViewDelegate> delegate;
@property (weak, nonatomic) id<AWEIMTabIndicatorViewDataSource> dataSource;
@property (weak, nonatomic) UIScrollView *targetPageScrollView;
@property (retain, nonatomic) NSNumber *defaultLandingIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgress:(double)a0 offset:(double)a1 scrollView:(id)a2;
- (void)updateSelectedIndex:(long long)a0 byScrollView:(id)a1;
- (void)setupSelectedStateBeforeReloadData;
- (double)indicatorViewWidth;
- (BOOL)enableMutiTabAutoLayout;
- (double)p_totalWidthBeforIndex:(long long)a0;
- (double)p_itemWidth:(long long)a0;
- (void)p_updateIndicatorLayout:(double)a0;
- (void)__reloadUIFromConfig:(id)a0;
- (double)__offsetForIndicatorCenterXIndex:(long long)a0;
- (void)p_updateIndicatorProgress:(double)a0 scrollView:(id)a1;
- (void)p_updateItemStateByScrollOffset:(double)a0 scrollView:(id)a1;
- (double)p_belowNaviStyleWidth;
- (id)p_cellWithIndex:(long long)a0;
- (void)__updateCurrentSelectedIndex:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)resetConfig:(id)a0;

@end
