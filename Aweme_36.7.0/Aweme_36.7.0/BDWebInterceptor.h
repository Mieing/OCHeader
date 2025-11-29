@class NSMutableArray;

@interface BDWebInterceptor : NSObject

@property (retain, nonatomic) NSMutableArray *schemaHandlers;
@property (retain, nonatomic) NSMutableArray *requestDecorators;
@property (retain, nonatomic) NSMutableArray *requestFilters;

+ (void)addGlobalInterceptorMonitor:(id)a0;
+ (void)addGlobalRequestFilter:(id)a0;
+ (id)bdw_globalInterceptorMonitors;
+ (id)bdw_globalRequestFilters;
+ (void)removeGlobalInterceptorMonitor:(id)a0;
+ (void)removeGlobalRequestFilter:(id)a0;
+ (BOOL)willBlockRequest:(id)a0;
+ (id)willDecorateRequest:(id)a0;
+ (void)willDecorateURLProtocolTask:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)setupClassPluginForWebInterceptor;
- (void)registerCustomRequestDecorator:(Class)a0;
- (id)bdw_requestDecorators;
- (void)p_setupInterceptorIfNeeded;
- (id)processSchemeHandlers:(id)a0 withWebview:(id)a1;
- (void)registerCustomURLSchemaHandler:(Class)a0;
- (Class)schemaHandlerClassWithURLRequest:(id)a0 webview:(id)a1;
- (void)removeCustomRequestDecorator:(Class)a0;
- (void).cxx_destruct;
- (id)init;

@end
