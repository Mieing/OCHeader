@class NSDictionary, NSArray;

@interface AWEDPUndertakeMonitor : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSArray *gdLabels;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSArray *hookEventList;
@property (nonatomic) BOOL loginEventCallback;
@property (retain, nonatomic) NSDictionary *ruleList;

+ (id)sharedInstance;

- (BOOL)enableUndertakeEventHook;
- (id)undertakeHookEventList;
- (BOOL)undertakeHookEventV3:(id)a0 params:(id)a1;
- (void)setLoginEventCallbackWithURL:(id)a0;
- (BOOL)needUndertakeRenderStepForURL:(id)a0;
- (BOOL)isUndertakeURL:(id)a0;
- (BOOL)handleMagicPageStayTimeIfNeed:(id)a0 extraParams:(id)a1;
- (BOOL)enableLoginEventCallback;
- (void).cxx_destruct;
- (id)init;
- (id)defaultConfig;
- (void)_setup;

@end
