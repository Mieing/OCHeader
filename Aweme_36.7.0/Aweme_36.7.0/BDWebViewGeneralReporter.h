@class NSMutableDictionary;

@interface BDWebViewGeneralReporter : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *ORIGImpDic;
@property (class, retain, nonatomic) NSMutableDictionary *insertedDelegateIMPs;

+ (void)updateMonitorOfWKWebView:(id)a0 statusCode:(id)a1 error:(id)a2 withType:(long long)a3;
+ (void)prepareForClass:(Class)a0;
+ (Class)getTargetDelegateClass:(id)a0;
+ (void)prepareORIGForClass:(Class)a0;
+ (Class)bdwm_hookClass:(id)a0 error:(id *)a1;
+ (id)getDelegateIMPs:(Class)a0;
+ (void)updateSLMonitorWithWKWebView:(id)a0 statusCode:(id)a1 error:(id)a2 type:(long long)a3;
+ (void)updateMonitorWithWebView:(id)a0 statusCode:(id)a1 error:(id)a2 type:(long long)a3;
+ (void)reportPageStartToSDKMonitor:(id)a0;
+ (void)tryReportResourceLoaderMainFrameInfo:(id)a0;
+ (void)reportNativeErrorWithSLMonitor:(id)a0 slErrorCode:(long long)a1 slErrorMsg:(id)a2 slErrorScene:(id)a3;

@end
