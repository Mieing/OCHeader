@interface AWETrackUtils : NSObject

+ (void)startTimingCaptureFrameTimeCost;
+ (void)endTimingCaptureFrameTimeCostWithIsSourceImage:(BOOL)a0;
+ (void)trackCaptureFrameResult:(BOOL)a0 isSourceImage:(BOOL)a1;
+ (void)startTimingSaveToAlbumTimeCost;
+ (void)startTimingSaveDraftTimeCost;
+ (void)endTimingSaveDraftTimeCostWithEnterFrom:(id)a0;
+ (void)startTimingPublishPreviewPageInitTimeCost;
+ (void)endTimingPublishPreviewPageInitTimeCostWithEnterFrom:(id)a0;
+ (void)endTimingSaveToAlbumTimeCostWithEnterFrom:(id)a0;
+ (BOOL)enableEditorOptimizeTrack;

@end
