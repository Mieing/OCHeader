@interface AWEPadSchemaRouterMonitor : NSObject

+ (BOOL)Enable;
+ (id)defaultMonitor;

- (void)transferFail:(id)a0 errorMsg:(id)a1 sceneName:(id)a2 moduleNname:(id)a3;

@end
