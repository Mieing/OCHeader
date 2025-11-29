@class IESOuterTestConfig;

@interface IESOuterTest : NSObject

@property (retain, nonatomic) IESOuterTestConfig *config;

+ (id)secureLinkBaseUrl;
+ (BOOL)enableSecLink;
+ (void)updateUIStyle:(long long)a0;
+ (void)popupOuterTestNewVersionIfNeededWithCustomHeaders:(id)a0 traceParams:(id /* block */)a1 frequencyControl:(id /* block */)a2 popupBlock:(id /* block */)a3;
+ (id)jsbDomainAllowList;
+ (id)sloganString;
+ (void)configBDWebSecLink;
+ (id)secureLinkDefaultBaseUrl;
+ (void)openOuterTestWebViewWithURLStr:(id)a0 params:(id)a1 fromController:(id)a2;
+ (void)openOuterTestWebViewWithURLStr:(id)a0 params:(id)a1 fromController:(id)a2;
+ (void)popupOuterTestNewVersionIfNeededWithTraceParams:(id /* block */)a0 frequencyControl:(id /* block */)a1 popupBlock:(id /* block */)a2;
+ (void)popupOuterTestNewVersionIfNeededWithTraceParams:(id /* block */)a0 frequencyControl:(id /* block */)a1 popupBlock:(id /* block */)a2;
+ (void)joinOuterTestNewVersionIfNeededWithTraceParams:(id /* block */)a0 frequencyControl:(id /* block */)a1 popupBlock:(id /* block */)a2;
+ (void)joinOuterTestNewVersionIfNeededWithTraceParams:(id /* block */)a0 frequencyControl:(id /* block */)a1 popupBlock:(id /* block */)a2;
+ (void)joinOuterTestNewVersionTask:(id)a0 withTraceParams:(id /* block */)a1 popupBlock:(id /* block */)a2;
+ (void)joinOuterTestNewVersionTask:(id)a0 withTraceParams:(id /* block */)a1 popupBlock:(id /* block */)a2;
+ (id)packageInstallGuideControllerWithDownloadURL:(id)a0 traceEvent:(id)a1 traceParams:(id)a2;
+ (id)packageInstallGuideControllerWithDownloadURL:(id)a0 traceEvent:(id)a1 traceParams:(id)a2;
+ (void)initialize;
+ (id)sharedInstance;
+ (void)updateLocale:(id)a0;
+ (void)setup:(id /* block */)a0;

- (void).cxx_destruct;

@end
