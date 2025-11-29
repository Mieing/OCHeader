@class NSObject, NSString, AWEVideoPublishViewModel, AWEStudioClipOutputData, ACCEditBingoManager;
@protocol ACCFileUploadServiceProtocol, AWEStudioMusicModelProtocol, ACCEditVideoDataProtocol, OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWEAIVideoClipManager : NSObject <AWEAIVideoClipManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEStudioClipOutputData *clipOutputData;
@property (retain, nonatomic) ACCEditBingoManager *bingoManager;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *currentVideoData;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> previousMusicModel;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> currentMusicModel;
@property (nonatomic) BOOL hasGeneratedAIVideoClipSuccessfully;
@property (nonatomic) double startLocation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) double maxVideoDuration;
@property (nonatomic) long long lastVideoResolveType;
@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (copy, nonatomic) id /* block */ musicFallBackBlock;

+ (void)prepareAIVideoClipPrerequisiteWithPublishModel:(id)a0 musicModel:(id)a1 prerequisiteType:(long long)a2 completion:(id /* block */)a3;
+ (long long)maxVideoCount;
+ (void)prepareAIVideoClipPrerequisiteWithSourceAssetModels:(id)a0 music:(id)a1 prerequisiteType:(long long)a2 taskID:(id)a3 createID:(id)a4 extraInfo:(id)a5 isCommercialScene:(BOOL)a6 completion:(id /* block */)a7;
+ (double)maxAIVideoClipDurationInSeconds;
+ (void)requestAIAlgorithmModelWithCompletion:(id /* block */)a0;
+ (void)convertAssetModelsAVAssetToAVURLAssets:(id)a0 taskID:(id)a1 completion:(id /* block */)a2;
+ (id)toastDescriptionForError:(id)a0;
+ (BOOL)isError:(id)a0 equalTo:(long long)a1;
+ (double)maxVideoTotalDurationInSeconds;
+ (BOOL)shouldUseAIVideoClipMode:(BOOL)a0;
+ (double)maxVideoTotalDurationInHours;
+ (id)p_outputURLForAVAsset:(id)a0;
+ (void)p_exportSessionWithAVAsset:(id)a0 completion:(id /* block */)a1;

- (void)regenerateRandomAIVideoClipWithMusic:(id)a0 startLocation:(double)a1 startTime:(double)a2 duration:(double)a3 videoAssets:(id)a4 completion:(id /* block */)a5;
- (id)initWithMaxVideoDuration:(double)a0 publishViewModel:(id)a1;
- (double)validDurationForMusicDuration:(double)a0 assetsCount:(long long)a1;
- (void)fallbackToPreviousMusic;
- (id)p_errorWithCode:(long long)a0;
- (void)setMusic:(id)a0 startTime:(double)a1 duration:(double)a2 videoAssets:(id)a3 comlpetion:(id /* block */)a4;
- (long long)p_errorCodeWithVEErrorCode:(long long)a0;
- (void)downloadBeatsWithMusicIfNeeded:(id)a0 completion:(id /* block */)a1;
- (id)beatsWithMusic:(id)a0;
- (void)p_printDebugInfoOfBeats:(id)a0 music:(id)a1;
- (int)videoMaxDuration;
- (void)trackSuccessRateOfAlgorithmWithMusic:(id)a0 error:(id)a1 startDate:(id)a2;
- (long long)sourceAssetsArrayCount;
- (void)deleteVideoAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)insertAssetModel:(id)a0 index:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getRandomResolve:(id /* block */)a0;
- (void)generateRandomAIVideoClipWithMusic:(id)a0 startTime:(double)a1 duration:(double)a2 videoAssets:(id)a3 completion:(id /* block */)a4;
- (void)deleteAllAssetModels:(id /* block */)a0;
- (id)allVideoKeys;
- (id)p_reasonForErrorCode:(long long)a0;
- (id)initWithMaxVideoDuration:(double)a0 clipOutputData:(id)a1;
- (void)setMusic:(id)a0 videoAssets:(id)a1 comlpetion:(id /* block */)a2;
- (void)downloadBeatsWithMusic:(id)a0;
- (void)trackSuccessRateOfAlgorithmWithMusic:(id)a0 error:(id)a1;
- (void)regenerateRandomAIVideoClipWithMusic:(id)a0 startLocation:(double)a1 videoAssets:(id)a2 completion:(id /* block */)a3;
- (void)generateRandomAIVideoClipWithDeleteVideoAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)generateRandomAIVideoClipWithMoveVideoFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)cancelPreciseAIVideoClipGeneration;
- (id)makePlayerItemWithVideoData:(id)a0 targetVideoSize:(struct CGSize { double x0; double x1; })a1 clipTimeRangeArray:(id)a2;
- (id)getExportSessionWithPlayerItem:(id)a0;
- (void).cxx_destruct;
- (int)trackDuration;

@end
