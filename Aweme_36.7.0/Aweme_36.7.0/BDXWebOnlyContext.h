@interface BDXWebOnlyContext : BDXSubContext

@property (nonatomic) BOOL disableJSBridgeBroadcastNotification;
@property (copy, nonatomic) id /* block */ customGlobalPropsScriptBlock;
@property (copy, nonatomic) id /* block */ webInterceptorBlock;
@property (nonatomic) BOOL enableTTNet;
@property (copy, nonatomic) id /* block */ enableTTNetWithURL;

- (void)mergeContext:(id)a0 shouldOverride:(BOOL)a1;
- (void).cxx_destruct;

@end
