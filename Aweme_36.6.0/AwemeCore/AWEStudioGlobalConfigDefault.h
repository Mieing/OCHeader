@interface AWEStudioGlobalConfigDefault : NSObject

+ (BOOL)isLite;
+ (BOOL)supportEditWithPublish;
+ (id)extendBundleName;
+ (id)watermarkProductName;
+ (id)imageWatermarkName;

- (BOOL)shouldKeepLiveMode;
- (BOOL)supportEditWithPublish;
- (BOOL)shouldSyncToToutiaoAndXigua;
- (BOOL)shouldSupportSpecialPlusButton;
- (id)customProgressWeightDict:(id)a0;

@end
