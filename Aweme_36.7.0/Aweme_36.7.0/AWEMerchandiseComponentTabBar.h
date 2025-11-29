@class NSArray, NSString, UICollectionView, NSDictionary;
@protocol AWEMerchandiseComponentTabBarDelegate;

@interface AWEMerchandiseComponentTabBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *tabBar;
@property (copy, nonatomic) NSArray *tabNames;
@property (copy, nonatomic) NSString *selectedTab;
@property (copy, nonatomic) NSDictionary *tabsTypeDict;
@property (copy, nonatomic) NSDictionary *redPointShowDict;
@property (weak, nonatomic) id<AWEMerchandiseComponentTabBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)totalTabsWidthWithTabs:(id)a0 height:(double)a1;

- (void)configWithTabBarConfig:(struct { id x0; id x1; id x2; id x3; unsigned long long x4; })a0 minimumLineSpacing:(double)a1;
- (void)configTabBarWithMinimumLineSpacing:(double)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;

@end
