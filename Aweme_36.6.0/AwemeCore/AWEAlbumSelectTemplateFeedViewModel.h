@class UIViewController, ACCMVTemplatesTransitionDelegate, NSMutableSet, NSMutableArray, AWEVideoPublishViewModel;
@protocol AWEAlbumSelectTemplateFeedViewControllerProtocol, ACCMVTemplatesDataControllerProtocol;

@interface AWEAlbumSelectTemplateFeedViewModel : NSObject

@property (retain, nonatomic) id<ACCMVTemplatesDataControllerProtocol> dataController;
@property (retain, nonatomic) ACCMVTemplatesTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) NSMutableSet *needRemoveIndexs;
@property (nonatomic) BOOL usedProloadData;
@property (retain, nonatomic) NSMutableArray *reportArray;
@property (nonatomic) unsigned long long viewModelType;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) BOOL needReload;
@property (weak, nonatomic) UIViewController<AWEAlbumSelectTemplateFeedViewControllerProtocol> *viewController;

- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (id /* block */)didPickTemplateBlock;
- (void)handleOnViewDidAppear;
- (void)registerCellForcollectionView:(id)a0;
- (void)loadMoreContentDataWithCompletion:(id /* block */)a0;
- (void)refreshContentDataIsRetry:(BOOL)a0 isPulled:(BOOL)a1 completion:(id /* block */)a2;
- (void)refreshContentDataIsRetry:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_handleDidFavoriteMVTemplate:(id)a0;
- (void)p_handleDidUnFavoriteMVTemplate:(id)a0;
- (id)p_filteredDataSource;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;

@end
