@class NSHashTable, ACCMusicInfo, NSArray, NSOperationQueue, NSDictionary, NSMutableSet, ACCAlgorithmService, NSBlockOperation, ACCIntelligentMovieBIMManager;

@interface ACCIntelligentMovieService : NSObject

@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) ACCAlgorithmService *algorithmService;
@property (retain, nonatomic) ACCIntelligentMovieBIMManager *bimManager;
@property (nonatomic) unsigned long long curTaskStep;
@property (copy, nonatomic) id /* block */ taskProgress;
@property (copy, nonatomic) id /* block */ taskCompletion;
@property (nonatomic) long long taskStartTime;
@property (retain, nonatomic) NSOperationQueue *preExtractionQueue;
@property (retain, nonatomic) NSBlockOperation *bimModelFetchOp;
@property (nonatomic) BOOL oneClickFilmingBtnClicked;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL nextBtnClicked;
@property (retain, nonatomic) NSHashTable *processingOp;
@property (retain, nonatomic) NSMutableSet *results;
@property (retain, nonatomic) NSMutableSet *alreadyProcessedAssetsLocalIdentifiers;
@property (nonatomic) BOOL hasUsedCacheInStorage;
@property (retain, nonatomic) ACCMusicInfo *selectedMusicInfo;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void)startIntelligentTask;
- (void)optimize_matchValidMoment;
- (void)materailAnalysis;
- (void)recommendTaskProgressUpdate:(double)a0;
- (void)recommendTaskSuccess;
- (void)matchValidMoment;
- (void)recommendTaskFailedWithDetail:(id)a0;
- (void)fetchTemplateWithMoment:(id)a0;
- (BOOL)p_isProcessingAsset:(id)a0;
- (BOOL)p_isProcessedAsset:(id)a0;
- (void)optimize_storeBimResultsAndGoMatchingMoment;
- (void)startRecommendTaskWithAssets:(id)a0 taskProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)startTemplateMatchTashWithAssets:(id)a0 taskProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)resetBtnClickState;
- (void)prepareForPreFeatureExtraction;
- (void)didSelectAssetsFromAlbum:(id)a0;
- (void)didDeselectAssetsFromAlbum:(id)a0;
- (void)didClickCancelButtonOfAlbum;
- (void)didClickNextButtonOfAlbum;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
