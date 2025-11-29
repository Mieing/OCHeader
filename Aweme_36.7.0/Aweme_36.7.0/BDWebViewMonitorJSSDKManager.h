@interface BDWebViewMonitorJSSDKManager : NSObject

@property (copy, nonatomic) id /* block */ shouldInjectJSSDKBlock;

+ (id)scriptForTimingForWebView:(id)a0 domMonitor:(BOOL)a1;
+ (id)shared;

- (void).cxx_destruct;

@end
