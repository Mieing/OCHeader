@interface ACCPicTemplateAlbumTracker : NSObject

+ (void)trackSuccess;
+ (void)trackFailureWithErrorCode:(long long)a0 errorMsg:(id)a1;
+ (void)initAlbumLoadNextPerfTrackWithTemplateModel:(id)a0 publishModel:(id)a1 enterFrom:(id)a2;
+ (void)startDownloadTrackWithIsCache:(BOOL)a0;
+ (void)endDownloadTrack;
+ (void)startFillAssetsTrack;
+ (void)endFillAssetsTrack;
+ (void)startFillPublishModelTrack;
+ (void)endFillPublishModelTrack;
+ (void)startApplyTemplateTrack;
+ (void)endApplyTemplateTrack;
+ (void)startEnterEditPageTrack;
+ (void)endEnterEditPageTrack;
+ (void)trackStart;

@end
