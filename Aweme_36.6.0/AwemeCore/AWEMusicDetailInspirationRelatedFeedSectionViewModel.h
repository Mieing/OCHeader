@class AWEInspirationMusicAwemeRelatedListDataController, NSArray, NSError, AWEMusicDetailDataContext, AWEMusicDetailTrackInstance;

@interface AWEMusicDetailInspirationRelatedFeedSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWEInspirationMusicAwemeRelatedListDataController *dataController;
@property (retain, nonatomic) AWEMusicDetailTrackInstance *trackInstance;
@property (nonatomic) BOOL feedListPerfomanceHasTracked;
@property (retain, nonatomic) NSArray *firstPageVideoLists;
@property (copy, nonatomic) NSArray *musicAwemeList;
@property (nonatomic) BOOL firstPageVideoListsHasReplaced;
@property (nonatomic) BOOL isMusicAwemeListEmpty;
@property (nonatomic) long long failType;
@property (retain, nonatomic) AWEMusicDetailDataContext *dataContext;
@property (retain, nonatomic) NSError *networkError;

- (void)prepareTrackInstance:(id)a0;
- (void)setupMusicDetailFailType:(long long)a0;
- (id)fetchAwemeListExtraParams;
- (id)activityMobParams;
- (id)lastGroupOriginMaterialsListJSONStringEncoded;
- (void)appendSkeletonModels;
- (void)fetchVideoListDataWithCompletion:(id /* block */)a0;
- (void)loadMoreVideoListDataWithCompletion:(id /* block */)a0;
- (void)appendFirstPageVideoDataListModels;
- (void)setupIsMusicAwemeListEmpty:(BOOL)a0;
- (void)setupMusicAwemeList:(id)a0;
- (void)updateFeedListPerfomanceHasTracked:(BOOL)a0;
- (id)commonLogExtraDictForFeed;
- (unsigned long long)numberOfSkeletonModels;
- (void)trackRelatedFeedEnterWithModel:(id)a0 musicFailReason:(id)a1;
- (void)trackRelatedFeedShow:(id)a0 index:(long long)a1 musicFailReason:(id)a2;
- (id)filterDatasourceWithArray:(id)a0 byRemovingElementsInReferenceArray:(id)a1 isEqual:(id /* block */)a2 didGetDuplicatedArray:(id /* block */)a3;
- (void)updateFirstPageFeedListIfNeed;
- (void).cxx_destruct;

@end
