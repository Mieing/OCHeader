@class IESECWinFeedFlowLayout, IESECWinTabListModel, NSString, IESECGradientView, IESECInfinitelyRefreshFooter, IESECRelationInlineManager, IESECWinContext, IGListAdapter, FBKVOController, UICollectionView, IESECServiceProxy, UIScrollView;
@protocol IESECWinLiveService, IESECWinOpportunityService, IESECWinDataStatusService, IESECWinTabLayoutService, IESECWinLivingHotProductService, IESECWinLynxCardService, IESECWinTabService, IESECWinFeedService, IESECWinComponentService, IESECWinMainScrollService, IESECWindowImageService, IESECWinFeedLinkedService, IESECWinCategoryService;

@interface IESECWinTabViewController : UIViewController <IGListAdapterDataSource, IGListDisplayDelegate, UIScrollViewDelegate, UICollectionViewDelegate, IESECRelationInlinePlayerControllerDelegate, IESECWinTabViewControllerProtocol> {
    IESECWinContext *_context;
    unsigned long long _currentLayout;
}

@property (retain, nonatomic) IESECWinTabListModel *tabList;
@property (retain, nonatomic) FBKVOController *KVOController;
@property (retain, nonatomic) IESECWinFeedFlowLayout *flowLayout;
@property (retain, nonatomic) IESECInfinitelyRefreshFooter *footer;
@property (retain, nonatomic) IESECRelationInlineManager *inlineManager;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLivingHotProductService> *livingHotProductService;
@property (retain, nonatomic) IESECServiceProxy<IESECWindowImageService> *imageService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinComponentService> *componentService;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) IGListAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long tabDataStatus;
@property (retain, nonatomic) UIScrollView *scrollView;

- (void)initialData;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)p_addObserver;
- (void)scrollDidEnd;
- (void)reloadViewController;
- (void)updateWithTabList:(id)a0;
- (id)initWithContext:(id)a0 tabList:(id)a1;
- (void)tabVCWillShow;
- (void)tabVCDidShow;
- (void)setBackGroundGradientView;
- (void)configFooterRefresh;
- (void)footerLoadMore;
- (void)p_addTablistObserver:(id)a0;
- (void)changeTabLayout;
- (void)reloadListDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupViews;

@end
