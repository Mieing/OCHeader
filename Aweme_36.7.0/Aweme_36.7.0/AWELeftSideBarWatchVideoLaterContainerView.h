@class AWELeftSideBarWatchVideoLaterContainerUIConfig, UICollectionView, NSString, UIView, AWELeftSideBarWatchVideoLaterHeaderUIConfig, AWELSBWatchVideoLaterHeaderView;
@protocol AWELeftSideBarItemContext, AWELeftSideBarWatchVideoLaterContainerViewDelegate;

@interface AWELeftSideBarWatchVideoLaterContainerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWELSBWatchVideoLaterHeaderView *headerView;
@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterContainerUIConfig *containerUIConfig;
@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterHeaderUIConfig *headerUIConfig;
@property (nonatomic) double maxTitleHeight;
@property (weak, nonatomic) id<AWELeftSideBarWatchVideoLaterContainerViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *headerButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUIConfig;
- (void)handleTapShowAllBtn:(id)a0;
- (double)calculateContainerHeight;
- (void)reloadContaienerView;
- (void)updateHeaderTextWithUnreadCount:(long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupView;
- (double)containerHeight;

@end
