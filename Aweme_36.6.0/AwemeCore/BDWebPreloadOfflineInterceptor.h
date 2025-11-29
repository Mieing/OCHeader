@class NSString, WKWebView;

@interface BDWebPreloadOfflineInterceptor : NSObject <IESFalconCustomInterceptor>

@property (weak, nonatomic) WKWebView *webview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webContainerId:(id)a0;
+ (void)setupWithWebView:(id)a0;

@end
