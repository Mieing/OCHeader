@class WxaRouterConfig;

@interface WxaLiteAppConfig : NSObject

@property (retain, nonatomic) WxaRouterConfig *wxaRouterConfig;

- (id)init;
- (void)setEntryPoint:(id)a0;
- (void)setEntryPointArgs:(id)a0;
- (void)addFlutterPlugin:(id)a0;
- (void)setup;
- (void).cxx_destruct;

@end
