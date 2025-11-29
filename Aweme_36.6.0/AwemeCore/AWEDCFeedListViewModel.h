@class UIViewController, NSString, AWEDCFeedConfig, AWEDCFeedPageContext, NSMutableArray, AWEListDataController;
@protocol AWEDCFeedDataManagerProtocol, AWEDCFeedListViewControllerProtocol;

@interface AWEDCFeedListViewModel : AWEBaseListViewModel <AWEDCFeedListViewModelProtocol>

@property (weak, nonatomic) AWEDCFeedConfig *config;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) id<AWEDCFeedDataManagerProtocol> dataManager;
@property (retain, nonatomic) NSMutableArray *waitDeleteAwemeArray;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)dealloc;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)cancelRequestTask;
- (void)awemeDeleteNotificationHandler:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void)appendModels:(id)a0 animated:(BOOL)a1;
- (void)removeModels:(id)a0 animated:(BOOL)a1;
- (id)awemeModelWithIndexPath:(id)a0;
- (id)awemeModelWithID:(id)a0;
- (id)allAwemeArray;
- (void)fetchListDataWithReason:(unsigned long long)a0 params:(id)a1 args:(id)a2 completion:(id /* block */)a3;
- (void)loadMoreListDataWithReason:(unsigned long long)a0 params:(id)a1 args:(id)a2 completion:(id /* block */)a3;
- (void)insertModels:(id)a0 indexPath:(id)a1 animated:(BOOL)a2;
- (void)replaceModels:(id)a0 sync:(BOOL)a1;
- (void)exchangeModelAtIndexPath:(id)a0 withIndexPath:(id)a1 animated:(BOOL)a2;
- (void)insertCommonLynxCardModel:(id)a0 indexPath:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)showSkeletonIfNeeded;
- (BOOL)isShowingSkeleton;
- (id)sectionBizContextWithIndexPath:(id)a0;
- (BOOL)isRefreshingData;
- (id)filterDataArray:(id)a0 args:(id)a1;
- (id)createSectionViewModelWith:(id)a0;
- (void)setupNotification;
- (BOOL)isSpecialCard:(id)a0;
- (id)classNameWithReferString;
- (void)setupContainerViewModel;
- (void)removeWaitDeleteAwemeArray;
- (void)fetchFallbackDataWithCompletion:(id /* block */)a0;
- (void)loadPlaceholderDataCompletion:(id /* block */)a0;
- (id)indexPathWithModel:(id)a0;
- (BOOL)isSkeletonWithIndexPath:(id)a0;
- (void)setupDataManager;
- (void)replaceModels:(id)a0 withoutFilter:(BOOL)a1 sync:(BOOL)a2;
- (void)prefetchCoverIfNeededWithAwemeArray:(id)a0;
- (BOOL)currentSectionViewModelsEnablePlaceholder;
- (id)createSectionViewModelsWith:(id)a0;
- (id)setupDataControllerWithConfig:(id)a0;
- (id)indexPathWithItemID:(id)a0;
- (void)updateDataStateWithRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id /* block */)reserveModelAfterFirstFetch:(long long)a0;
- (id)createSectionViewModelsWith:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (void)updateFirstLoadCompleteStatusWithRefreshReason:(unsigned long long)a0;
- (void)handleDelayFinishIfNeededWithReason:(unsigned long long)a0 params:(id)a1 args:(id)a2 completion:(id /* block */)a3 response:(id)a4 error:(id)a5 useUnconsumedVideos:(BOOL)a6 startTime:(double)a7;
- (void)appendSectionViewModelsWith:(id)a0 lastSectionViewModel:(id)a1;
- (BOOL)currentSectionViewModelsEnableSkeleton;
- (long long)indexWithIndexPath:(id)a0;
- (void)updateDataControllerWithDeleteModels:(id)a0;
- (id)awemeModelWithObject:(id)a0;
- (id)createSectionViewModelWith:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1 index:(long long)a2;
- (long long)sectionModelCount;
- (BOOL)canRefresh;
- (void).cxx_destruct;

@end
