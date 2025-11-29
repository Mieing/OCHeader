@class CAGradientLayer, LLCubeModel, IESLLLiveShelfPagingDataController, NSString, IESLLLiveLynxView, IESLLFeedRefreshFooter;

@interface IESLLLiveSearchResultViewController : AWEBaseListViewController <UIScrollViewDelegate, LLCubeViewDelegate>

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) IESLLFeedRefreshFooter *mjFooter;
@property (retain, nonatomic) IESLLLiveLynxView *searchEmptyView;
@property (retain, nonatomic) LLCubeModel *searchEmptyModel;
@property (weak, nonatomic) IESLLLiveShelfPagingDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionControllerClassArray;
- (id)createSectionControllerForSectionViewModel:(id)a0;
- (void)setupBinding;
- (void)setupBackgroundLayer;
- (void)setupSearchEmpty;
- (id)searchEmptyDataWithShelfModel:(id)a0;
- (void)updateSearchResultWithModel:(id)a0 actionType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)updateBackgroundColor:(id)a0;
- (void)setupCollectionView:(id)a0;

@end
