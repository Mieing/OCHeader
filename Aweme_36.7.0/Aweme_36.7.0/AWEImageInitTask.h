@class NSString;

@interface AWEImageInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupGlobalConfig;
+ (id)cacheKeyFilter:(id)a0;
+ (void)setupImageDiskCacheBlock;
+ (id)getBizTagWithURL:(id)a0;
+ (BOOL)HEICConfig:(id)a0 defaultValue:(BOOL)a1;
+ (void)setupImageSamplingConfig;
+ (void)notifyImageUsage:(id)a0;
+ (void)setupSafetyHeaderWithABConfig:(id)a0;
+ (void)prf_execute;
+ (void)notifyImageWillDecode:(id)a0;
+ (void)setupGlobalMonitorConfig;
+ (void)setupFormatTransform;
+ (void)cleanLocalDynamicSizeConfig;
+ (void)setupImageCacheConfigForCache:(id)a0 config:(id)a1;
+ (id)setupCustomDiskCacheClearForCache:(id)a0 clearInfo:(id)a1;
+ (id)originalSizeConfig;
+ (id)localDynamicSizeConfig;
+ (void)saveLocalDynamicSizeConfig;
+ (void)execute;


@end
