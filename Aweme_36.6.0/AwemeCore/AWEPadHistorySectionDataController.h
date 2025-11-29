@class AWEPadBaseSectionViewModel, NSObject;
@protocol OS_dispatch_group, AWEPLVSectionViewModelProtocol;

@interface AWEPadHistorySectionDataController : AWEListDataController

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (nonatomic) long long episodeHistoryCursor;
@property (nonatomic) long long seriesHistoryCursor;
@property (nonatomic) BOOL isEpisodeRequestOnAir;
@property (nonatomic) BOOL isSeriesRequestOnAir;
@property (nonatomic) BOOL episodeHistoryHasMore;
@property (nonatomic) BOOL seriesHistoryHasMore;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *containerSection;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchEpisodeSectionDataWithError:(id)a0;
- (void)fetchSeriesHistoryDataWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
