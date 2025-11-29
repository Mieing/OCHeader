@class AWEVideoHallDataController, AWEVideoHallHistorySectionViewModel, AWEVideoHallPageContext, AWEVideoHallHotSectionViewModel, AWELVideoSideBarGuideModel, NSString;

@interface AWEVideoHallViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEVideoHallPageContext *context;
@property (retain, nonatomic) AWEVideoHallDataController *dataController;
@property (retain, nonatomic) AWEVideoHallHistorySectionViewModel *historySectionViewModel;
@property (retain, nonatomic) AWEVideoHallHotSectionViewModel *hotSectionViewModel;
@property (retain, nonatomic) AWELVideoSideBarGuideModel *guideConfig;
@property (nonatomic) long long historyDataState;
@property (readonly, nonatomic) long long feedDataState;
@property (nonatomic) BOOL finishFirstPreload;
@property (nonatomic) BOOL revisitImageIsReady;
@property (copy, nonatomic) NSString *scene;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)fetchHistoryData;
- (void)handleHistoryResponse:(id)a0 error:(id)a1;
- (BOOL)shouldShowRevisitEntranceGuide;
- (id)getOriginViewModelList;
- (void)handleResponse:(id)a0 isLoadMore:(BOOL)a1 error:(id)a2;
- (void)loadMoreConfigListData;
- (id)filterBlockInfos:(id)a0;
- (void)buildSectionViewModelWithBlockInfos:(id)a0;
- (void)prefetchCoverImageForBlock:(id)a0;
- (void)preloadSideBarRevisitGuide;
- (void).cxx_destruct;
- (void)setupWithContext:(id)a0;

@end
