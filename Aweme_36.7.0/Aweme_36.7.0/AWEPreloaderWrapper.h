@class NSString;

@interface AWEPreloaderWrapper : NSObject <AWEPreloaderWrapperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getVSResolution:(id)a0;
+ (long long)getVSVideoFirstHighlight:(id)a0;
+ (void)checkOutPreloadStrategyScene:(id)a0;
+ (void)pausePreloadStrategyScene:(id)a0;
+ (void)resumePreloadStrategyScene:(id)a0;
+ (id)createPriorityStrategyMediaWithModel:(id)a0 bitrateSelectModel:(id)a1 preloadPriorityLevel:(long long)a2 tag:(id)a3 preloadSize:(long long)a4 preloadCustomPath:(id)a5 preloadCompletedBlock:(id /* block */)a6;
+ (void)addLowPriorityTaskWithModels:(id)a0;
+ (id)createLowPriorityStrategyMediaWithModel:(id)a0 bitrateSelectModel:(id)a1 preloadCompletedBlock:(id /* block */)a2;
+ (BOOL)isEnableDash:(id)a0;
+ (BOOL)enablePreloadStrategySupportRevisitOptimizationInInnerFeed:(id)a0;
+ (id)createStrategyMediaWithModel:(id)a0 bitrateSelectModel:(id)a1 preloadCompletedBlock:(id /* block */)a2;
+ (double)awe_getPreloadSizeFactor:(id)a0;
+ (double)awe_getPreloadSize:(id)a0 bitrateSelectModel:(id)a1;
+ (BOOL)needUseVSEpisodeModel:(id)a0;
+ (id)safe_getURI:(id)a0;
+ (id)getVSEpisodeMainUrl:(id)a0;
+ (id)getVSVideoEnginModel:(id)a0;
+ (double)awe_getVSMultiplierOfPreloadSize:(unsigned long long)a0;
+ (id)awe_getVSEpisodeEngineModel:(id)a0;
+ (void)awe_businessEventStrategyScene:(id)a0;
+ (void)awe_requestEventPreloadStrategyScene:(id)a0;
+ (double)continuePlayTime:(id)a0;
+ (void)preloadEnd:(id)a0 bitrate:(id)a1 error:(id)a2 block:(id /* block */)a3 logStr:(id)a4;
+ (void)preloadDidStart:(id)a0 bsModel:(id)a1 info:(id)a2;


@end
