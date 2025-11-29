@interface MJAnalysisGuidanceUtils : NSObject

+ (BOOL)isImageEditedWithMetadata:(id)a0;
+ (BOOL)isVideoEditedWithMetadata:(id)a0 quickTimeMetadata:(id)a1;
+ (BOOL)isScreenshotImageWithMetadata:(id)a0;
+ (BOOL)isScreenRecordingVideoWithMetadata:(id)a0;

@end
