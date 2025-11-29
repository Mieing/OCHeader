@interface WAJSEventCommon_videoPlayer : NSObject

+ (void)setVideoPath:(id)a0 videoView:(id)a1 appId:(id)a2;
+ (void)reportAppBrandVideoPreLoadWithFilePath:(id)a0 costTimeMs:(unsigned long long)a1 preLoadStatus:(unsigned long long)a2;
+ (unsigned long long)queryPreloadStatusWithVideoUrl:(id)a0;

@end
