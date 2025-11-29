@class NSString;

@interface IESLiveWebViewMonitor : NSObject <WKScriptMessageHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithClassNames:(id)a0 settingModel:(id)a1;
+ (void)startMonitorWithClasses:(id)a0 setting:(id)a1;
+ (id)hook_ORIGDic;
+ (void)installMonitorOnWKWebView:(id)a0 urlString:(id)a1;
+ (void)startWithClasses:(id)a0 settingModel:(id)a1;
+ (void)bdhmx_startWithClasses:(id)a0 defaultsettingModel:(id)a1;
+ (void)startWithClasses:(id)a0 settings:(id)a1;
+ (void)bdhmx_startWithClasses:(id)a0 defaultsettingDict:(id)a1;
+ (void)bdhmx_startBDWebViewMonitorWithRemoteSetting;
+ (void)bdhmx_startWithClasses:(id)a0;
+ (void)bdhmx_startWithClassNames:(id)a0 settingModel:(id)a1;
+ (void)attemptStartWithClasses:(id)a0 fromRemoteSettingWithDefault:(id)a1;
+ (void)p_startWithClasses:(id)a0 settings:(id)a1 isLive:(BOOL)a2;
+ (id)dicWithDefaultValue:(id)a0;
+ (void)hookWebViewMethodsWithClasses:(id)a0 settings:(id)a1 isLive:(BOOL)a2;
+ (void)hookProgressWithClasses:(id)a0 settings:(id)a1 isLive:(BOOL)a2;
+ (BOOL)startMonitorItem:(id)a0 classes:(id)a1 setting:(id)a2;
+ (void)setStopUpdateBrowser:(BOOL)a0;
+ (void)registerReportBlock:(id /* block */)a0;
+ (Class)getNodeClassWithWebView:(Class)a0;
+ (void)stopLiveMonitor;
+ (id)emptyScriptForWebView:(id)a0;
+ (BOOL)checkUrlIsInAllowListWithUrl:(id)a0;
+ (id)monitorInfoScript:(id)a0;
+ (void)setClass:(Class)a0 sel:(id)a1 imp:(void /* function */ *)a2;
+ (id)sharedMonitor;
+ (void)startMonitor;

@end
