@class NSString, WKWebView;

@interface SystemUASetter : NSObject

@property (retain, nonatomic) WKWebView *webview;
@property (copy, nonatomic) NSString *systemDefaultUA;

+ (id)shareInstance;
+ (id)deviceSystemDefaultUA;

- (id)syncGetSystemDefaultUA;
- (id)syncGetSystemUAOrDefaultUAOnFail;
- (void)asyncGenSystemDefaultUAWithSingletonReturnBlock:(id /* block */)a0;
- (void)mainThread_asyncGetSystemDefaultUA:(id /* block */)a0;
- (id)getMMUserAgent;
- (id)getMMUserAgentWithDetailInfo:(id)a0;
- (id)getMMUserAgentWithSystemDefaultUA:(id)a0;
- (id)getMMUserAgentWithSystemDefaultUA:(id)a0 detailInfo:(id)a1;
- (void)updateDefaultUserAgent;
- (void)updateDefaultUserAgentWithoutOverwriteGlobalSetting:(id /* block */)a0;
- (id)getDefaultUserAgentWithWeixinVersion;
- (void).cxx_destruct;

@end
