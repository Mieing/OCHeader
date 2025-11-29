@interface TTAccountUserProfileTask : NSObject

+ (id)startUploadImage:(id)a0 progress:(id *)a1 completion:(id /* block */)a2;
+ (id)startUploadCommonImage:(id)a0 isSensitive:(unsigned char)a1 progress:(id *)a2 completion:(id /* block */)a3;
+ (id)startCheckCanSetUserType:(long long)a0 completion:(id /* block */)a1;
+ (id)startCheckSensitiveInfoWithDict:(id)a0 completion:(id /* block */)a1;
+ (id)startCheckUserDefaultInfoWithScene:(long long)a0 completion:(id /* block */)a1;
+ (id)getRecommendNickNameWithCompletion:(id /* block */)a0;
+ (id)startGetUserInfoWithScene:(long long)a0 completion:(id /* block */)a1;
+ (id)startGetUserInfoForJsonObjWithScene:(long long)a0 completion:(id /* block */)a1;
+ (id)p_uploadWithImage:(id)a0 imageName:(id)a1 url:(id)a2 isNeedCompress:(BOOL)a3 extraParams:(id)a4 progress:(id *)a5 completion:(id /* block */)a6;
+ (void)syncCurrentUserInfo:(id)a0 response:(id)a1;
+ (id)startGetUserAuditInfoIgnoreDispatchWithExtraRequestParams:(id)a0 completion:(id /* block */)a1;
+ (void)getUserInfoAfterStartUp;
+ (id)startGetConnectedAccountsWithCompletion:(id /* block */)a0;
+ (id)startUploadCommonImage:(id)a0 isSensitive:(unsigned char)a1 isNeedCompress:(BOOL)a2 progress:(id *)a3 completion:(id /* block */)a4;
+ (id)startUploadBgImage:(id)a0 progress:(id *)a1 completion:(id /* block */)a2;
+ (id)startCheckName:(id)a0 completion:(id /* block */)a1;
+ (id)startGetThirdpartUserInfoWithDict:(id)a0 Completion:(id /* block */)a1;
+ (id)startGetUserAuditInfoWithCompletion:(id /* block */)a0;
+ (id)startGetUserAuditInfoIgnoreDispatchWithCompletion:(id /* block */)a0;
+ (id)startUpdateUserProfileWithDict:(id)a0 completion:(id /* block */)a1;
+ (id)startUpdateUserExtraProfileWithDict:(id)a0 completion:(id /* block */)a1;

@end
