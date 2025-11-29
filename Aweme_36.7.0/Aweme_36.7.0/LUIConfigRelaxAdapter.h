@class NSString;

@interface LUIConfigRelaxAdapter : NSObject <LUIConfig> {
    struct LUIConfigParams { BOOL defaultOverflowVisible; BOOL enableTextRefactor; BOOL enableTextOverflow; BOOL enableNewClipMode; BOOL globalImplicit; BOOL enableEventRefactor; BOOL enableA11yIDMutationObserver; BOOL enableEventThrough; BOOL enableBackgroundShapeLayer; BOOL enableExposureUIMargin; BOOL enableTextLanguageAlignment; BOOL enableXTextLayoutReused; BOOL enableFiberArch; BOOL enableNewGesture; BOOL CSSAlignWithLegacyW3C; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } targetSdkVersion; double fluencyPageConfigProbability; BOOL enableTextLayerRenderer; BOOL enableTextNonContiguousLayout; BOOL enableImageDownsampling; BOOL enableNewImage; BOOL trailUseNewImage; unsigned int logBoxImageSizeWarningThreshold; BOOL enableTextLayoutCache; BOOL enableExposureWhenReload; } _config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableExposureUIMargin;
- (BOOL)enableNewGesture;
- (BOOL)enableEventThrough;
- (BOOL)enableTextRefactor;
- (id)targetSdkVersion;
- (BOOL)devtoolEnabled;
- (BOOL)enableTextGradientOpt;
- (BOOL)defaultOverflowVisible;
- (BOOL)enableTextOverflow;
- (BOOL)enableNewClipMode;
- (BOOL)globalImplicit;
- (BOOL)enableEventRefactor;
- (BOOL)enableA11yIDMutationObserver;
- (BOOL)enableBackgroundShapeLayer;
- (BOOL)enableTextLanguageAlignment;
- (BOOL)enableXTextLayoutReused;
- (BOOL)enableFiberArch;
- (BOOL)CSSAlignWithLegacyW3C;
- (BOOL)imageMonitorEnabled;
- (BOOL)fixNewImageDownSampling;
- (double)fluencyPageConfigProbability;
- (BOOL)enableTextLayerRenderer;
- (BOOL)enableTextNonContiguousLayout;
- (BOOL)enableImageDownsampling;
- (BOOL)enableNewImage;
- (BOOL)trailUseNewImage;
- (unsigned long long)logBoxImageSizeWarningThreshold;
- (BOOL)enableTextLayoutCache;
- (BOOL)enableExposureWhenReload;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfig:(const void *)a0;

@end
