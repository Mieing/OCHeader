@class NSString, WCFinderDynamicIconFetchConfig;

@interface WCFinderDynamicIconFetchSingleTask : WCFinderDynamicIconFetchTask <MMImageLoaderObserver>

@property (retain, nonatomic) WCFinderDynamicIconFetchConfig *config;
@property (copy, nonatomic) NSString *dynamicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithConfig:(id)a0;
+ (void)saveSVGData:(id)a0 urlString:(id)a1;

- (void)dealloc;
- (void)startProcess;
- (id)loadCacheImage;
- (id)imageFromData:(id)a0 isSVG:(BOOL *)a1;
- (id)renderNormalImage:(id)a0;
- (id)imageWithSVGData:(id)a0;
- (BOOL)isFinish;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
