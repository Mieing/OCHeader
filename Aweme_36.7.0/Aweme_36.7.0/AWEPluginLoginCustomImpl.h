@class NSString;

@interface AWEPluginLoginCustomImpl : NSObject <BDPUserPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (id)carrierStringForType:(long long)a0;

- (id)bdp_userIdWithAppID:(id)a0;
- (void)bdp_loginWithParam:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
- (BOOL)bdp_isLoginWithAppID:(id)a0;
- (id)bdp_sessionIdWithAppID:(id)a0;
- (void)handleWithPhoneNumber:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)handleWithToken:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (id)bdp_userIdForInternal;
- (id)bdp_secUserIdWithAppID:(id)a0;
- (void)bdp_getPhoneNumberWithParam:(id)a0 completion:(id /* block */)a1;
- (id)bdp_shortIdWithAppID:(id)a0;
- (double)bdp_useDuration;
- (void)bdp_dealUserRelationWithParam:(id)a0 completion:(id /* block */)a1;
- (void)bdp_getLocalPhoneNumberWithAppID:(id)a0 completion:(id /* block */)a1;
- (void)bdp_getLocalPhoneNumberTokenWithAppID:(id)a0 completion:(id /* block */)a1;
- (id)bdp_awemeUserNicknameWithAppID:(id)a0;
- (id)bdp_getBindPhoneNumberWithAppID:(id)a0;
- (void)bdp_getAvatarThumbWithAppID:(id)a0 completion:(id /* block */)a1;
- (BOOL)bdp_getHomepageLeftBarStatus;
- (BOOL)bdp_isAppIDInFavoritesList:(id)a0;
- (BOOL)bdp_enableTeenMode;
- (id)bdp_x_tt_token;
- (id)bdp_sdk_version;

@end
