@class AWEMusicDetailInspirationFeedSectionViewModel, AWEMusicDetailEmptyTipSectionViewModel, AWEMusicDetailInspirationFeedDataContext, AWEMusicDetailInspirationSectionViewModel, AWEMusicDetailInspirationRelatedFeedSectionViewModel, AWEMusicDetailDataContext, AWEMusicDetailTrackInstance;

@interface AWEMusicDetailInspirationFeedContainerViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEMusicDetailDataContext *dataContext;
@property (retain, nonatomic) AWEMusicDetailInspirationFeedDataContext *feedDataContext;
@property (nonatomic) long long failType;
@property (retain, nonatomic) AWEMusicDetailTrackInstance *trackInstance;
@property (nonatomic) BOOL inspirationSectionPreloadRequested;
@property (nonatomic) BOOL feedSectionPreloadRequested;
@property (nonatomic) BOOL relatedFeedSectionPreloadRequested;
@property (retain, nonatomic) AWEMusicDetailInspirationSectionViewModel *inspirationViewModel;
@property (retain, nonatomic) AWEMusicDetailInspirationFeedSectionViewModel *feedSectionViewModel;
@property (retain, nonatomic) AWEMusicDetailInspirationRelatedFeedSectionViewModel *relatedFeedSectionViewModel;
@property (retain, nonatomic) AWEMusicDetailEmptyTipSectionViewModel *emptyTipSectionViewModel;
@property (readonly, nonatomic) BOOL isEmptyList;
@property (readonly, nonatomic) BOOL isEmptyRelatedList;
@property (readonly, nonatomic) BOOL hasMoreData;
@property (readonly, nonatomic) BOOL relatedHasMoreData;

- (void)setupViewModel;
- (void)prepareTrackInstance:(id)a0;
- (void)setupMusicDetailFailType:(long long)a0;
- (BOOL)isVinylPlayerCardStyle;
- (BOOL)isVinylCardStyle;
- (BOOL)musicDetailRelatedEnable;
- (void)preloadDetailData;
- (void)shareRecommendedAwemeCoversForIM;
- (void)updateDataContext:(id)a0;
- (void)preparePlaceHolderView:(unsigned long long)a0;
- (void)showFirstPageInspirationListDataIfNeeded:(unsigned long long)a0;
- (void)showFirstPageViedeoListDataIfNeeded:(unsigned long long)a0;
- (BOOL)musicDetailRelatedFeedEnable;
- (void)showEmptyTipViewIfNeeded:(unsigned long long)a0;
- (void)showFirstPageRelatedViedeoListDataIfNeeded;
- (double)heightForInspirationSectionView;
- (void)loadMoreVideoListDataIfNeeded;
- (void)loadMoreRelatecdVideoListDataIfNeeded;
- (id)currentSectionViewModelList;
- (void)showEmptyTipViewWithPreloadStatusIfNeeded;
- (BOOL)inspirationIsEmptyList;
- (void).cxx_destruct;

@end
