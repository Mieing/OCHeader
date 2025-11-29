@interface ACCGenericTemplateAlbumTracker : NSObject

+ (void)appendExtraParams:(id)a0;
+ (void)trackSuccess;
+ (void)trackFailureWithErrorCode:(long long)a0 errorMsg:(id)a1;
+ (void)initAlbumLoadNextPerfTrackWithTemplateModel:(id)a0 publishModel:(id)a1 enterFrom:(id)a2;
+ (void)endHightLightTrack;
+ (void)startDownloadTrackWithIsCache:(BOOL)a0;
+ (void)endDownloadTrack;
+ (void)startFillAssetsTrack;
+ (void)endFillAssetsTrack;
+ (void)startFillPublishModelTrack;
+ (void)endFillPublishModelTrack;
+ (void)startApplyTemplateTrack;
+ (void)startPreprocessTrack;
+ (void)endPreprocessTrack;
+ (void)endApplyTemplateTrack;
+ (void)startEnterEditPageTrack;
+ (void)startHightLightTrack;
+ (void)endEnterEditPageTrack;
+ (id)mvAbilityWithTemplate:(id)a0;
+ (void)trackStart;

@end
