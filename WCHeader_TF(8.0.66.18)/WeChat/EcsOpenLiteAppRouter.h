@interface EcsOpenLiteAppRouter : EcsOpenBaseRouter

- (BOOL)canHandle:(id)a0 context:(id)a1;
- (void)handlePreload:(id)a0 context:(id)a1 preloadConfig:(id)a2 callback:(id)a3;
- (void)handleOpen:(id)a0 context:(id)a1 callback:(id)a2;

@end
