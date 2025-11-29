@interface AWEAlbumAutoFilmTracker : NSObject

+ (void)trackToolsAlbumAutoFilmPerformanceSuccess;
+ (void)updateWithTemplateModel:(id)a0;
+ (void)markToolsAlbumAutoFilmPerformanceCloudFeatureEnd;
+ (void)resetToolsAlbumAutoFilmPerformanceTracker;
+ (void)trackToolsAlbumAutoFilmPerformanceStart;
+ (void)trackToolsAlbumAutoFilmPerformanceTerminateError:(id)a0;
+ (void)trackToolsAlbumAutoFilmPerformanceCancelWithRetryTimes:(long long)a0;
+ (void)updateCreateId:(id)a0;
+ (void)markToolsAlbumAutoFilmPerformanceFillAssets;
+ (void)updateAssetsCountWithAssets:(id)a0;
+ (void)markToolsAlbumAutoFilmPerformanceExtractFeatures;
+ (void)markToolsAlbumAutoFilmPerformanceCloudFeatureStart;
+ (void)addTrackerInfoWith:(id)a0;
+ (void)updateWithProcessILAResultWithMaterials:(id)a0 featureAlbumTypes:(id)a1;
+ (void)updateTrackerRetryTimes:(long long)a0;
+ (void)trackToolsAlbumAutoFilmPerformanceError:(id)a0 stage:(long long)a1;
+ (void)markToolsAlbumAutoFilmPerformanceFetchList;
+ (void)markToolsAlbumAutoFilmPerformanceDownloadResources;
+ (void)markToolsAlbumAutoFilmPerformanceApplyTemplate;
+ (void)markToolsAlbumAutoFilmPerformanceApplyTemplateEnd;
+ (void)updateWithCloudFeatureResult:(BOOL)a0;
+ (void)markToolsAlbumAutoFilmPerformancePreprecessStart;
+ (void)markToolsAlbumAutoFilmPerformancePreprecessEnd;
+ (void)markToolsAlbumAutoFilmPerformanceEditFirstFrame;
+ (void)updateTemplateId:(id)a0 templateType:(long long)a1 templateAbility:(id)a2;

@end
