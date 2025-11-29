@class NSString;

@interface IESLocalLifeUserBizService : HTSService <IESLocalLifeUserBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentLoginUser;
+ (void)requireLogin:(id /* block */)a0;
+ (void)requireLogin:(id /* block */)a0 withTrackerInformation:(id)a1;
+ (void)recordSecUidWithUid:(id)a0 withSecUid:(id)a1;
+ (void)requestRawFavoriteItemWithConfig:(id)a0 completion:(id /* block */)a1;
+ (id)currentSecUserID;
+ (void)loginWithPlatform:(unsigned long long)a0;
+ (BOOL)isLoginWithDouYin;
+ (id)currentUserID;
+ (BOOL)isLogin;


@end
