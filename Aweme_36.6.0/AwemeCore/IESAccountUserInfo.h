@interface IESAccountUserInfo : NSObject

+ (void)addUserToSaaS:(id)a0;
+ (void)getPassportAccountInfoWithHeaders:(id)a0 completedBlock:(id /* block */)a1;
+ (void)updateMultiUserListToSaaSIfNeed;
+ (void)clearSaaSMultiUserList;
+ (void)deleteSaaSUserIdList:(id)a0;

@end
