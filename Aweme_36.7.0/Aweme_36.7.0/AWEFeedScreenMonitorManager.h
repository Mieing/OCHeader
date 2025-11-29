@interface AWEFeedScreenMonitorManager : NSObject

+ (double)screenScaleForCapture;
+ (double)thresholdRatioOfPixelCount;
+ (long long)reportUITreeType;
+ (double)thresholdOfDark;
+ (id)darkScreenMonitorConfig;
+ (BOOL)enable;
+ (long long)blockSize;
+ (id)sharedInstance;
+ (double)delaySeconds;

- (void)startMonitorScreenIfNeeded;
- (void)realStartMonitorScreen;
- (id)takeScreenshotWithScale:(double)a0;
- (BOOL)isScreenBlackWithImage:(id)a0 threshold:(double)a1 blockSize:(long long)a2;
- (BOOL)isPixelDark:(unsigned char)a0 threshold:(unsigned char)a1;

@end
