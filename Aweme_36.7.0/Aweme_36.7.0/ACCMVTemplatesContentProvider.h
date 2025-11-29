@class NSString, ACCMVCategoryModel, ACCMVTemplatesTransitionDelegate, NSMutableSet, AWEVideoPublishViewModel, UIViewController;
@protocol ACCWaterfallViewControllerProtocol, ACCMVTemplatesDataControllerProtocol;

@interface ACCMVTemplatesContentProvider : NSObject <ACCWaterfallContentProviderProtocol>

@property (retain, nonatomic) id<ACCMVTemplatesDataControllerProtocol> dataController;
@property (nonatomic) BOOL usedProloadData;
@property (retain, nonatomic) ACCMVTemplatesTransitionDelegate *transitionDelegate;
@property (nonatomic) BOOL hasFetchLandingTab;
@property (retain, nonatomic) NSMutableSet *needRemoveIndexs;
@property (nonatomic) BOOL isLandingCategory;
@property (retain, nonatomic) ACCMVCategoryModel *category;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ willEnterDetailVCBlock;
@property (copy, nonatomic) id /* block */ didPickTemplateBlock;
@property (copy, nonatomic) id /* block */ currentVCVisibleBlock;
@property (weak, nonatomic) UIViewController<ACCWaterfallViewControllerProtocol> *viewController;
@property (readonly, nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (void)handleOnViewDidAppear;
- (void)registerCellForcollectionView:(id)a0;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (void)loadMoreContentDataWithCompletion:(id /* block */)a0;
- (void)refreshContentDataIsRetry:(BOOL)a0 isPulled:(BOOL)a1 completion:(id /* block */)a2;
- (void)refreshContentDataIsRetry:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_handleDidFavoriteMVTemplate:(id)a0;
- (void)p_handleDidUnFavoriteMVTemplate:(id)a0;
- (id)p_filteredDataSource;
- (void)trackForLoadingCompleted:(double)a0 responseDuration:(double)a1 loadType:(long long)a2 error:(id)a3;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;

@end
