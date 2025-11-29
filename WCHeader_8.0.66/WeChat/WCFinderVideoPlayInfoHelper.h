@interface WCFinderVideoPlayInfoHelper : NSObject

+ (id)getVideoDownloadProgressSimplifiedInfoWithReporter:(id)a0 mediaWrap:(id)a1 mediaInfo:(id)a2;
+ (id)getVideoDownloadProgressInfoWithReporter:(id)a0 mediaWrap:(id)a1 mediaInfo:(id)a2;
+ (id)getPreloadProgressBarWithTitle:(id)a0 len:(double)a1 buff:(double)a2 play:(double)a3 isStreaming:(BOOL)a4;
+ (id)getVideoPreloadProgressBar;
+ (id)getVideoDownloadDebugInfoWithReporter:(id)a0 mediaWrap:(id)a1 mediaInfo:(id)a2 playBackInfo:(id)a3;
+ (id)getVideoSpeedInfoWithContentVM:(id)a0;
+ (id)getAudioBitrateWithPlayBackInfo:(id)a0;

@end
