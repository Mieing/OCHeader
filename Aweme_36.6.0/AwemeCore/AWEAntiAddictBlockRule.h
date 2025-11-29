@interface AWEAntiAddictBlockRule : AWEExternalRouterBlockBaseRule

- (BOOL)needBlockURLString:(id)a0 context:(id)a1 userActivity:(id)a2 linkSession:(id)a3;
- (void)handleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3 completion:(id /* block */)a4;
- (BOOL)p_isURLInAllowList:(id)a0;

@end
