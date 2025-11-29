@class AWELandscapePageContext, NSString, AWEBinding, AWEAwemeModel;
@protocol AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeDetailViewController : AWEBaseListViewController <UIScrollViewDelegate>

@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWELandscapePageContext *context;
@property (retain, nonatomic) AWEBinding *binding;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> splitScreenContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)bindSectionViewModel;
- (void)updateWithModel:(id)a0 context:(id)a1 dataController:(id)a2;
- (void)handelFetchSectionDataState:(long long)a0;
- (void)setupFooterIfNeed;
- (void)trackSlideDetailPage;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrolling;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupCollectionView:(id)a0;

@end
