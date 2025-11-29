@class NSString;

@interface BDWebViewPluginMonitorInternal : NSObject <IWKPluginObjectMonitor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)plugin:(id)a0 didInterceptWebView:(id)a1 lifecycle:(id)a2 flowType:(unsigned long long)a3 start:(long long)a4 end:(long long)a5;

@end
