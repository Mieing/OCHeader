@interface ACCGenericTemplateSocialRequestHelper : NSObject

+ (void)fetchSocialInfoWithSlotInfo:(id)a0 isSelf:(BOOL)a1 completion:(id /* block */)a2;
+ (id)convertToGenericTemplateCustomInfoModelsWithUserInfo:(id)a0 avatarPath:(id)a1 slotInfo:(id)a2;
+ (void)fetchMediaUserInfoWithUserType:(id)a0 slotInfo:(id)a1 completion:(id /* block */)a2;
+ (id)parseUserInfoFromJsonString:(id)a0;
+ (id)formatUserInfo:(id)a0 formatStr:(id)a1;

@end
