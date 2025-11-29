@interface AWEAntiAddictNoticeNetworkManager : NSObject

+ (void)fetchUserAntiAddictNoticeSettingSceneType:(long long)a0;
+ (void)updateUserAntiAddictNoticeSetting:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
+ (void)fetchUserAntiAddictNoticeSettingSceneType:(long long)a0 sceneTypeString:(id)a1 needRetry:(BOOL)a2 completion:(id /* block */)a3;
+ (void)trackSLOBeginWithRetry:(BOOL)a0;
+ (void)trackSLOEndWithError:(id)a0 model:(id)a1 extra:(id)a2;
+ (BOOL)isSameUserID:(id)a0 loginEndUserID:(id)a1;
+ (void)cacheElderModePopupModelImage:(id)a0;
+ (void)fetchUserAntiAddictNoticeSettingSceneType:(long long)a0 sceneTypeString:(id)a1 completionBlock:(id /* block */)a2;
+ (id)getSceneTypeString:(long long)a0;

@end
