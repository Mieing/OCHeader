@class NSString;

@interface LUIConfigAdapter : NSObject <LUIConfig> {
    void *_config;
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
- (id)initWithConfig:(void *)a0;

@end
