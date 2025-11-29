@interface ACCGenericTemplateSparkRequestHelper : NSObject

+ (void)fetchSocialInfoWithShareSparkData:(id)a0 slotInfo:(id)a1 isSelf:(BOOL)a2 completion:(id /* block */)a3;
+ (id)parseUserInfoFromJsonString:(id)a0;
+ (id)generateUserInfoFromLoginUser;
+ (id)formatShareSparkData:(id)a0 userInfo:(id)a1 formatStr:(id)a2 isSelf:(BOOL)a3;
+ (id)convertToGenericTemplateCustomInfoModelsWithAvatarPath:(id)a0 slotInfo:(id)a1 stringValue:(id)a2;
+ (void)downloadAvatarWithURL:(id)a0 slotInfo:(id)a1 completion:(id /* block */)a2;
+ (void)fetchMediaUserInfoWithUserType:(id)a0 userID:(id)a1 slotInfo:(id)a2 completion:(id /* block */)a3;
+ (void)onlyDownloadAvatarWithURL:(id)a0;
+ (void)preloadMediaUserInfoWithUserType:(id)a0 userID:(id)a1 completion:(id /* block */)a2;

@end
