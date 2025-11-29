@interface AWEShareAsStoryTracker : NSObject

+ (id)trackSnackBarParamsWithAwemeModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)trackGetPlayerCacheStatus:(BOOL)a0 error:(id)a1 params:(id)a2;
+ (void)trackUseStreamEditStyleStatus:(BOOL)a0 awemeType:(id)a1 awemeId:(id)a2 enterFrom:(id)a3 duration:(double)a4;
+ (void)trackStreamEditVideoDownloadWithStatus:(BOOL)a0 duration:(double)a1 url:(id)a2;
+ (void)trackStreamEditVideoLaggingWithBufferingCount:(BOOL)a0 duration:(double)a1 url:(id)a2;
+ (void)trackStreamEditDownloadImageTimeCost:(double)a0 awemeId:(id)a1 enterFrom:(id)a2 awemeType:(id)a3 isLocalResource:(BOOL)a4;
+ (void)trackShareToStoryDownloadBackgroundImageTimeCost:(double)a0 awemeId:(id)a1 enterFrom:(id)a2 awemeType:(id)a3 isLocalResource:(BOOL)a4;
+ (void)trackStreamEditGetPlayerCacheVideoTimeCost:(double)a0 awemeId:(id)a1;
+ (void)trackStreamEditStartDownloadTimeCost:(double)a0 awemeId:(id)a1;
+ (void)trackStreamEditDetectBlackBorderTimeCost:(double)a0 awemeId:(id)a1;
+ (void)trackStreamEditDownloadEffectTimeCost:(double)a0 awemeId:(id)a1 enterFrom:(id)a2 awemeType:(id)a3;
+ (void)trackStreamEditPreparationTimeCost:(double)a0;
+ (void)trackDownloadImageStatus:(BOOL)a0 error:(id)a1 awemeType:(id)a2 awemeId:(id)a3 enterFrom:(id)a4 isLocalResource:(BOOL)a5;
+ (void)trackQuickTaskBeforeStartPublishTimeCost:(double)a0 mainThreadPrepareSourceTimeCost:(double)a1 mainThreadPreparePublishTimeCost:(double)a2 mainThreadAllTimeCost:(double)a3 awemeId:(id)a4 enterFrom:(id)a5 awemeType:(id)a6 isNetworkUrl:(BOOL)a7;
+ (void)trackDownloadBackgroundImageStatus:(BOOL)a0 error:(id)a1 awemeType:(id)a2 awemeId:(id)a3 enterFrom:(id)a4 isLocalResource:(BOOL)a5;
+ (void)trackDownloadEffectStatus:(BOOL)a0 error:(id)a1 awemeType:(id)a2 awemeId:(id)a3 enterFrom:(id)a4;
+ (void)trackGetLocalVideoStatus:(BOOL)a0 error:(id)a1 awemeType:(id)a2 awemeId:(id)a3 enterFrom:(id)a4;
+ (void)trackStreamEditGetPlayerCacheStatus:(BOOL)a0 error:(id)a1 awemeType:(id)a2 awemeId:(id)a3 enterFrom:(id)a4 duration:(double)a5;
+ (void)trackDetectBlackBorderStatus:(BOOL)a0 error:(id)a1 awemeType:(id)a2 awemeId:(id)a3 enterFrom:(id)a4;
+ (void)trackEnterEditPageStatus:(BOOL)a0 error:(id)a1 awemeType:(id)a2 awemeId:(id)a3 enterFrom:(id)a4;
+ (void)trackVideoCheck:(BOOL)a0 isNetwork:(BOOL)a1 url:(id)a2 awemeType:(id)a3 awemeId:(id)a4 enterFrom:(id)a5;
+ (void)trackShareToStoryFailedWithFromThirdApp:(BOOL)a0;
+ (void)reportTrackInfoWithDownloadDuration:(double)a0 success:(BOOL)a1 aweType:(id)a2 isStreamEdit:(BOOL)a3 playerCacheStrategy:(long long)a4 enterFrom:(id)a5 videoDuration:(double)a6;
+ (void)reportAutoPopEditPageEventWithError:(id)a0 enterFrom:(id)a1;
+ (void)reportPlayAddrNullEventWithEnterFrom:(id)a0;
+ (void)reportCancelShareEventWithEnterFrom:(id)a0 videoDuration:(double)a1 loadDuration:(double)a2;
+ (void)trackVEDownloadCacheStatus:(BOOL)a0 enterFrom:(id)a1 fromShareInterface:(BOOL)a2 cachePathValid:(BOOL)a3 cacheSizeValid:(BOOL)a4 mediaSizeValid:(BOOL)a5;
+ (void)trackVESetupDownloaderStatus:(long long)a0 enterFrom:(id)a1 fromShareInterface:(BOOL)a2;
+ (void)trackShowJumpBubbleEvent:(id)a0;
+ (void)trackClickJumpBubbleEvent:(id)a0;
+ (void)trackShareToStoryDownloadMusicSuccess:(BOOL)a0 enterFrom:(id)a1 awemeType:(id)a2;
+ (void)trackShareToStoryDownloadMusicTimeCost:(double)a0 enterFrom:(id)a1 awemeType:(id)a2;
+ (void)trackStayInEditPageTimeCost:(double)a0 enterFrom:(id)a1 shootWay:(id)a2 videoType:(long long)a3 fromStoryButton:(BOOL)a4;
+ (void)trackGetCloudCompileAuthInfoTimeCost:(double)a0 enterFrom:(id)a1 shootWay:(id)a2 videoType:(long long)a3;
+ (void)trackGetCloudCompileVideoVidTimeCost:(double)a0 enterFrom:(id)a1 shootWay:(id)a2 videoType:(long long)a3 useCache:(long long)a4;
+ (void)trackGetCloudCompileInfoTotalTimeCost:(double)a0 enterFrom:(id)a1 shootWay:(id)a2 videoType:(long long)a3 useCache:(long long)a4;
+ (void)trackGetCloudCompileAuthInfoResult:(BOOL)a0 errorCode:(long long)a1 errorMsg:(id)a2;
+ (void)trackGetCloudCompileInfoCountWithEnterFrom:(id)a0 shootWay:(id)a1 videoType:(long long)a2 useCache:(long long)a3;
+ (void)trackGetCloudCompileVideoVidResult:(BOOL)a0 enterFrom:(id)a1 shootWay:(id)a2 videoType:(long long)a3 useCache:(long long)a4 errorCode:(int)a5 extention:(int)a6 errorMsg:(id)a7 isVEError:(BOOL)a8;
+ (void)trackSnackBarShowWithParams:(id)a0;
+ (void)trackSnackBarClickWithParams:(id)a0;
+ (void)trackCancelQuickShareWithPublishModel:(id)a0;
+ (void)trackQuickShareDoneActionWithPublishModel:(id)a0 method:(id)a1 isEdited:(BOOL)a2;
+ (id)trackQuickShareVideoStreamEditWithTimeout:(BOOL)a0 isPermanentValidVideoUrl:(BOOL)a1 downloaderStatus:(long long)a2 downloaderErrorCode:(long long)a3 isError:(long long)a4 awemeType:(id)a5 awemeId:(id)a6 enterFrom:(id)a7 duration:(double)a8 isCheckedVideoURL:(BOOL)a9 isCheckedPermanentValidVideoURL:(BOOL)a10 videoDownloaderStatus:(long long)a11 permanentDownloaderStatus:(long long)a12;
+ (void)trackPreExecuteTimeForShareClick:(double)a0 preUploadTime:(double)a1 isPreUpload:(BOOL)a2 isVideo:(BOOL)a3 awemeType:(id)a4 awemeId:(id)a5;

@end
