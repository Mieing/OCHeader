@class AWEMusicDetailTrackInstance, NSArray, NSError, AWEMusicDetailDataContext, AWEInspirationMusicAwemeListDataController;

@interface AWEMusicDetailInspirationFeedSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWEInspirationMusicAwemeListDataController *dataController;
@property (nonatomic) long long hotSpotCount;
@property (retain, nonatomic) AWEMusicDetailTrackInstance *trackInstance;
@property (nonatomic) BOOL feedListPerfomanceHasTracked;
@property (retain, nonatomic) NSArray *firstPageVideoLists;
@property (nonatomic) long long failType;
@property (retain, nonatomic) AWEMusicDetailDataContext *dataContext;
@property (retain, nonatomic) NSError *networkError;

- (void)prepareTrackInstance:(id)a0;
- (void)setupMusicDetailFailType:(long long)a0;
- (void)trackFeedEnterWithModel:(id)a0;
- (id)fetchAwemeListExtraParams;
- (void)appendSkeletonModels;
- (void)fetchVideoListDataWithCompletion:(id /* block */)a0;
- (void)loadMoreVideoListDataWithCompletion:(id /* block */)a0;
- (void)appendFirstPageVideoDataListModels;
- (void)trackFeedShow:(id)a0 index:(long long)a1;
- (void)updateFeedListPerfomanceHasTracked:(BOOL)a0;
- (id)commonLogExtraDictForFeed;
- (unsigned long long)numberOfSkeletonModels;
- (void)limitHotSpotTag;
- (void).cxx_destruct;

@end
