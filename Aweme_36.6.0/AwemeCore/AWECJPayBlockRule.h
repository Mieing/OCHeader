@interface AWECJPayBlockRule : AWEExternalRouterBlockBaseRule

- (BOOL)needBlockURLString:(id)a0 context:(id)a1 userActivity:(id)a2 linkSession:(id)a3;
- (void)handleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3 completion:(id /* block */)a4;
- (BOOL)p_canUseEntranceFramework;
- (BOOL)p_isHitCJDYPayUniversalLink:(id)a0;
- (id)p_transferCJDYPayUniversalLinkToScheme:(id)a0;
- (void)p_reportLaunchLogWithURL:(id)a0 linkSession:(id)a1;
- (BOOL)p_isHitCJNFCUniversalLink:(id)a0;
- (id)p_transferCJNFCUniversalLinkToScheme:(id)a0;
- (BOOL)CJPayHanldeURL:(id)a0 linkSession:(id)a1;
- (long long)getSchemeType:(id)a0;

@end
