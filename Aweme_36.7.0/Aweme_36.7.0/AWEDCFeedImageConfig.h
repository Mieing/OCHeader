@class NSArray;

@interface AWEDCFeedImageConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enableIndependentCache;
@property (nonatomic) long long cacheType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL enablePreloadTransform;
@property (copy, nonatomic) id /* block */ imageTransformEnableBlock;
@property (nonatomic) BOOL enablePowerLimit;
@property (nonatomic) BOOL enableMemoryLimit;
@property (nonatomic) BOOL placeHolderDisableTransform;
@property (copy, nonatomic) id /* block */ shouldEnableTransform;
@property (nonatomic) float wt;
@property (nonatomic) float thr;
@property (nonatomic) float ovrt;
@property (nonatomic) BOOL enableAdaptive;
@property (nonatomic) float g0;
@property (nonatomic) float lc_wt_thr;
@property (nonatomic) float srResolution;
@property (copy, nonatomic) id /* block */ imageTransformBlock;
@property (nonatomic) BOOL enableImagePreConnect;
@property (retain, nonatomic) NSArray *imagePreConnectURLs;
@property (nonatomic) BOOL enablePreviewImage;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
