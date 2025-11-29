@class NSIndexPath, NSArray, UICollectionView, NSString, RxCollectionViewDiffableDataSource, AWEIMOnlineContactAvatarListTracker;
@protocol AWEIMSkylightInteractInterface, AWEIMSkylightMomentInterface;

@interface AWEIMSkylightViewComponent : AWEIMComponentBase <UICollectionViewDelegate, AWEIMSkylightViewInterface>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) AWEIMOnlineContactAvatarListTracker *tracker;
@property (copy, nonatomic) NSArray *sectionIDArr;
@property (nonatomic) unsigned long long placeholderCount;
@property (weak, nonatomic) id<AWEIMSkylightInteractInterface> interactInterface;
@property (weak, nonatomic) id<AWEIMSkylightMomentInterface> momentInterface;
@property (retain, nonatomic) NSIndexPath *selectedCellIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogin;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)onTabBarDidChangeNotification:(id)a0;
- (id)activeTrackArrayForMutualFollowUsers;
- (id)zoomTransitionStartViewForMoment;
- (long long)calculateCellIndex:(id)a0;
- (void)handlerNewResult:(id)a0 error:(id)a1 animatingDifferences:(BOOL)a2;
- (void)deleteCellsWithIdentifiers:(id)a0 animation:(BOOL)a1 completion:(id /* block */)a2;
- (void)reloadCellsWithIdentifiers:(id)a0 animation:(BOOL)a1;
- (id)itemIdentifiersInSectionId:(id)a0;
- (void)updateSkylightViewLayout;
- (void)updateCloseFriendsEntranceWithSettingStatus:(BOOL)a0;
- (void)handleStory25ColorRingSelecteCollectionViewCell:(id)a0;
- (void)createCollectionViewWithContext:(id)a0;
- (id)createDataSourceWithCollectionView:(id)a0;
- (void)afd_viewDidAppear;
- (void)handleCellSelectionWithCell:(id)a0 indexPath:(id)a1;
- (id)itemIdentifiers;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)resetTracker;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)resetContentOffset:(BOOL)a0;

@end
