@interface IESGCPCGScreenshotUtils : NSObject

+ (id)screenshotCachePath;
+ (void)asynCacheScreenshot:(id)a0 imageName:(id)a1 completion:(id /* block */)a2;
+ (id)screenshotImage;

@end
