@class IESECGoodsFeedLargeCardCollectionViewCell, IESECTracker, IESECRelationFloatLynxContainerController, NSString, IESECRelationInlineManager, IESECWinFeedEnterParameters, UIImageView, IGListAdapter, UICollectionView, IESECWinFeedNavBar, IESECWindowFeedDataController;

@interface IESECWindowFeedViewController : UIViewController <UIScrollViewDelegate, IESECWinFeedNavBarDelegate, UICollectionViewDelegate, IGListDisplayDelegate, IGListAdapterDataSource, IESECommerceAddGoodsToCartMessage, IESECRelationInlinePlayerControllerDelegate> {
    long long _onceToken;
    BOOL _refreshing;
}

@property (retain, nonatomic) IESECWinFeedEnterParameters *parameters;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECWinFeedNavBar *navBar;
@property (retain, nonatomic) IESECWindowFeedDataController *dataController;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECRelationInlineManager *inlineManager;
@property (retain, nonatomic) IESECRelationFloatLynxContainerController *lynxController;
@property (retain, nonatomic) UIImageView *skeletonView;
@property (retain, nonatomic) IESECGoodsFeedLargeCardCollectionViewCell *cellForCalculating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)configBtmTrackerV2;
- (void)scrollDidEnd;
- (void)backButtonDidTap;
- (void)acceptShoppingCartNumberChanged:(id)a0;
- (void)panelSwitchDidChanged:(unsigned long long)a0 state:(BOOL)a1;
- (void)refreshCellsWithCompletion:(id /* block */)a0;
- (void)__setUpViews;
- (void)__addInfiniteScroll;
- (void)__loadMore;
- (void)cartButtonDidTap;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithParameters:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;

@end
