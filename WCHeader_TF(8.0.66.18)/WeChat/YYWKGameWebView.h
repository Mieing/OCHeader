@class YYWKGameWebViewConfig, YYWKGameSchemeHandler;

@interface YYWKGameWebView : YYWKWebView

@property (retain, nonatomic) YYWKGameSchemeHandler *schemeHandler;
@property (nonatomic) BOOL isFirstLoad;
@property (retain, nonatomic) YYWKGameWebViewConfig *gameWebViewConfig;
@property (nonatomic) BOOL didSuccessUseSchemeMethod;

+ (void)forceInitializeWebPlatformStrategies;
+ (id)targetUrlSchemeArray;
+ (BOOL)enableHttpCustomScheme;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 config:(id)a2;
- (void)configurationWillCreate:(id)a0;
- (void)addAjaxPostBlobScript:(id)a0;
- (BOOL)canRegisterUrlScheme:(id)a0;
- (void)injectLoadRequestTimeIfNeed;
- (void)LoadRequest:(id)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onNetworkWeakChanged:(BOOL)a0 currentRTT:(unsigned int)a1;
- (void)notifyWebViewNetworkChange;
- (void).cxx_destruct;

@end
