@interface AWEOpenPlatformBlockRule : AWEExternalRouterBlockBaseRule

- (BOOL)needBlockURLString:(id)a0 context:(id)a1 userActivity:(id)a2 linkSession:(id)a3;
- (void)handleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3 completion:(id /* block */)a4;
- (BOOL)p_VCDShouldHandleURL:(id)a0;
- (BOOL)p_OpenPlatformShouldHandleURL:(id)a0;
- (BOOL)p_OpenPlatformHandleURL:(id)a0 linkSession:(id)a1;
- (BOOL)p_VCDHandleURL:(id)a0 linkSession:(id)a1;

@end
