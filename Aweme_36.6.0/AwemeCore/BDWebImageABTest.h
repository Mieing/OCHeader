@interface BDWebImageABTest : NSObject

@property (nonatomic) unsigned long long threadOptOptions;
@property (nonatomic) unsigned long long decodeForDisplayOptions;
@property (nonatomic) unsigned long long renderingOptOptions;
@property (nonatomic) unsigned long long transformerPreprocessingOptOptions;
@property (copy, nonatomic) id /* block */ customImageCacheConfigInterception;
@property (copy, nonatomic) id /* block */ customDiskCacheClearCallback;
@property (copy, nonatomic) id /* block */ customRequestHeaderInterceptionV2;
@property (copy, nonatomic) id /* block */ customRequestThrottleNetSpeedInterception;
@property (nonatomic) unsigned long long imageDecodeOptOptions;
@property (nonatomic) unsigned long long imageDownsampleOptOptions;
@property (nonatomic) unsigned long long undecodedImageMemoryOptOptions;
@property (nonatomic) unsigned long long fixImageIOCodeTypeVersion;
@property (nonatomic) BOOL fixImageIODecodePNGCrash;
@property (nonatomic) unsigned long long imageIODecoderOptOptions;
@property (nonatomic) BOOL enableImageCacheConfigOpt;
@property (nonatomic) unsigned long long logEnableOptions;
@property (nonatomic) BOOL enableMDLDownloaderFirst;
@property (nonatomic) unsigned long long requestIgnoreQueueType;
@property (copy, nonatomic) id /* block */ customRequestHeaderInterception;

+ (id)sharedABTest;
+ (BOOL)enableLogForCurrentlogEnableOption:(unsigned long long)a0 withOriginalEnableLog:(BOOL)a1;
+ (id)_create_prefetch_disk_query_queue;
+ (id)_create_normal_disk_query_queue;
+ (id)create_disk_query_queue:(BOOL)a0;

- (BOOL)canUseMDLDownload:(id)a0;
- (void).cxx_destruct;

@end
