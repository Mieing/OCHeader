@class NSArray, NSDictionary, NSString, NSMutableArray;
@protocol AWESearchPromotionGuideSearchSlidingTabBarProtocol;

@interface AWESearchPromotionGuideSearchSlidingTabBar : DUXBaseCollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) id<AWESearchPromotionGuideSearchSlidingTabBarProtocol> guideSearchSlidingTabBarDelegate;
@property (retain, nonatomic) NSArray *tabs;
@property (retain, nonatomic) NSMutableArray *hasReportedTabArray;
@property (nonatomic) BOOL isFromEcommerce;
@property (nonatomic) long long selectedTabIndex;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;

- (void)setupDefaultData;
- (void)trackTabShowWithTabIndex:(long long)a0 tabModel:(id)a1;
- (void)updateWithTabModels:(id)a0 isFromEcommerce:(BOOL)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)setupUI;

@end
