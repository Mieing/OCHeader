@class NSNumber, NSMutableArray, AWEVideoPublishViewModel;

@interface ACCRecommendMusicRequestManager : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) unsigned long long currentMusicServiceModuleType;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) BOOL autoDegradeSelectHotMusic;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (nonatomic) BOOL hotMusicIsProcessing;
@property (nonatomic) BOOL hotMusicHasMore;
@property (nonatomic) BOOL hotMusicFirstLoading;
@property (retain, nonatomic) NSNumber *hotMusicCursor;
@property (nonatomic) BOOL usedHotMusicDefaultMusicList;
@property (nonatomic) BOOL aiMusicIsProcessing;
@property (nonatomic) BOOL aiMusicHasMore;
@property (nonatomic) BOOL aiMusicFirstLoading;
@property (retain, nonatomic) NSNumber *aiMusicCursor;

- (void)resetRequestParams;
- (void)deleteMusicModelIfNeeded:(id)a0;
- (BOOL)shouldUseAIRecommendationMusic;
- (BOOL)usedDefaultMusicList;
- (BOOL)useHotMusic;
- (unsigned long long)currentRecommendMusicType;
- (id)currentRecommendMusicTypeString:(unsigned long long)a0;
- (BOOL)canUseLoadMore;
- (BOOL)editPageOnlyRequestAIRecommendMusic;
- (id)initWithPublishViewModel:(id)a0 musicServiceModule:(unsigned long long)a1;
- (id)currentRecommendMusicTypeString;
- (BOOL)autoDegradedSelectHotMusicDataSourceSuccess:(BOOL)a0;
- (void)p_fetchMusicListFromLibWithCompletion:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchDefaultMusicListWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
