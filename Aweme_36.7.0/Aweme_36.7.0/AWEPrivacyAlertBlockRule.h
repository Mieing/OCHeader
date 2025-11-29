@interface AWEPrivacyAlertBlockRule : AWEExternalRouterBlockBaseRule

- (void)handleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3 completion:(id /* block */)a4;
- (BOOL)needBlockURLString:(id)a0 context:(id)a1;

@end
