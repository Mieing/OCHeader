@interface AWEGrouponImageSuperResolutionManager : NSObject

+ (void)trackGrouponImageSRMonitorEvent:(id)a0 pageType:(long long)a1;
+ (id)imageSuperResolutionWithURLList:(id)a0 targetWidth:(double)a1 targetHeight:(double)a2;
+ (BOOL)isEnableImageSRWithUrl:(id)a0;
+ (double)isEnableSRScale;

@end
