@interface CSJAdAppActionManager : NSObject

+ (id)sharedManager;

- (long long)p_appstoreJumpTypeWithMaterial:(id)a0;
- (BOOL)openAppStoreWithMaterial:(id)a0 rootViewController:(id)a1 jumpType:(long long)a2 context:(id)a3 WithSucessCallBack:(id /* block */)a4 WithFailedCallback:(id /* block */)a5;
- (void)openAppStoreByOpenURLWithMaterial:(id)a0 context:(id)a1 openType:(long long)a2;
- (BOOL)handleAppWithDownloadUrl:(id)a0 WithSucessCallBack:(id /* block */)a1 WithFailedCallback:(id /* block */)a2;
- (void)openAppStoreActionTrackWithMaterial:(id)a0 context:(id)a1 notiName:(id)a2 needShowTime:(BOOL)a3;
- (id)setupUserInfo:(id)a0 tag:(id)a1 needShowTime:(BOOL)a2;
- (long long)handleActionWithModel:(id)a0 WithSucessCallBack:(id /* block */)a1 WithFailedCallback:(id /* block */)a2 context:(id)a3;
- (long long)openAppStoreTypeWithMaterial:(id)a0;

@end
