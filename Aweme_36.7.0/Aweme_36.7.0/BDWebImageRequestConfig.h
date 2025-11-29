@class BDWebImageCryptoKey, NSString, BDPreviewHashConfig, BDImageCropConfig, BDBaseTransformer, NSDictionary, BDBlurHashConfig;

@interface BDWebImageRequestConfig : NSObject

@property (class, nonatomic) BOOL unifyDefaultTimeoutInterval;

@property (copy, nonatomic) NSString *requestKey;
@property (nonatomic) BOOL isPrefetchOptionsFirst;
@property (nonatomic) struct CGSize { double width; double height; } sizeLimit;
@property (nonatomic) unsigned long long memoryLimit;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) NSString *cacheName;
@property (nonatomic) long long insulatedCacheType;
@property (copy, nonatomic) BDBlurHashConfig *blurHashConfig;
@property (retain, nonatomic) BDPreviewHashConfig *previewHashConfig;
@property (retain, nonatomic) BDWebImageCryptoKey *cryptoKey;
@property (retain, nonatomic) BDImageCropConfig *cropConfig;
@property (nonatomic) long long throttleNetSpeed;
@property (nonatomic) unsigned long long requestIgnoreQueueType;
@property (nonatomic) unsigned long long decoderOptions;
@property (retain, nonatomic) BDBaseTransformer *transformer;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL isBizPrefetchRequest;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageTag;
@property (nonatomic) unsigned long long randomSamplingPointCount;
@property (nonatomic) double transitionDurationPrecisely;
@property (copy, nonatomic) NSDictionary *requestHeaders;
@property (nonatomic) BOOL enableSafeHeader;
@property (copy, nonatomic) NSDictionary *customParam;
@property (copy, nonatomic) NSDictionary *customParamParsingInfo;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) unsigned long long transitionDuration;

+ (void)setDefaultTransitionDuration:(double)a0;

- (unsigned long long)transitionDuration;
- (void).cxx_destruct;
- (void)setTransitionDuration:(unsigned long long)a0;
- (id)init;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })size;

@end
