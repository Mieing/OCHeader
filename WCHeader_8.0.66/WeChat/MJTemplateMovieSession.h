@class NSArray, NSMutableDictionary, OMJMovieSession, MJAIAssetProcessor;

@interface MJTemplateMovieSession : MJTemplateSession

@property (retain, nonatomic) OMJMovieSession *maasMovieSession;
@property (copy, nonatomic) NSArray *assetInfos;
@property (retain, nonatomic) NSMutableDictionary *AIModelTypeCache;
@property (retain, nonatomic) NSMutableDictionary *templateBuildResultCache;
@property (retain, nonatomic) MJAIAssetProcessor *AIAssetProcessor;
@property (nonatomic) BOOL usesBuildAndSwitchOperation;
@property (nonatomic) double AIGeneratorTimeoutInterval;

- (BOOL)createMaasSession;
- (BOOL)_createMaasMovieSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)_tearDownMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)_cleanUpMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)startCreationWithTemplateID:(id)a0 musicIDs:(id)a1 assetInfos:(id)a2 options:(id)a3 outroInfo:(id)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6 recommendationOptions:(id)a7 preprocCompletionHandler:(id /* block */)a8;
- (void)_startCreationWithTemplateID:(id)a0 musicIDs:(id)a1 assetInfos:(id)a2 options:(id)a3 outroInfo:(id)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6 recommendationOptions:(id)a7 preprocCompletionHandler:(id /* block */)a8;
- (void)_cacheTemplateList:(id)a0;
- (void)restartCreationWithTemplateID:(id)a0 musicID:(id)a1 AIModelType:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 options:(id)a4 outroInfo:(id)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)restartCreationWithVideoTemplate:(id)a0 musicID:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 options:(id)a3 outroInfo:(id)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)restartCreationWithMusicID:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 options:(id)a2 outroInfo:(id)a3 progressHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)_restartCreationWithTemplateID:(id)a0 musicID:(id)a1 AIModelType:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 options:(id)a4 outroInfo:(id)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (id)templateBuildResultCacheWithTemplateID:(id)a0 musicID:(id)a1;
- (BOOL)cacheTemplateBuildResult:(id)a0 templateID:(id)a1 musicID:(id)a2;
- (id)templateBuildResultCacheKeyWithTemplateID:(id)a0 musicID:(id)a1;
- (void)startAIAssetProcessorIfNeeded;
- (void)cancelAIAssetProcessor;
- (void)cancelRecreationIfNeeded;
- (void)_cancelRecreationIfNeeded;
- (void)_cancelBuildIfNeeded;
- (void)_cancelAIBuildIfNeeded;
- (void)requestRecommendWithPageCtx:(id)a0 shouldRecommendBGM:(BOOL)a1 additionTemplateIDs:(id)a2 recommendCompletionHandler:(id /* block */)a3;
- (void)_requestRecommendWithPageCtx:(id)a0 shouldRecommendBGM:(BOOL)a1 additionTemplateIDs:(id)a2 recommendCompletionHandler:(id /* block */)a3;
- (long long)requestMusicRecommendWithTemplateID:(id)a0 clientRequestID:(unsigned long long)a1 recommendCompletionHandler:(id /* block */)a2;
- (long long)_requestMusicRecommendWithTemplateID:(id)a0 clientRequestID:(unsigned long long)a1 recommendCompletionHandler:(id /* block */)a2;
- (void)startPlayingWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 completionHandler:(id /* block */)a1;
- (void)startPlayingSegmentWithId:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 firstStop:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_startPlayingWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 specificSegmentId:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)startAssetClippingWithCompletionHandler:(id /* block */)a0;
- (void)stopAssetClippingWithCompletionHandler:(id /* block */)a0;
- (void)updateMovieOptions:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)startExportingCreationWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 outputFilePath:(id)a1 exportMovieOptions:(id)a2 exportSettings:(id)a3 progressHandler:(id /* block */)a4 resultHandler:(id /* block */)a5;
- (void)startExportingCreationAsynchronouslyWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 outputFilePath:(id)a1 exportMovieOptions:(id)a2 exportSettings:(id)a3 progressHandler:(id /* block */)a4 resultHandler:(id /* block */)a5;
- (void).cxx_destruct;

@end
