@class NSString, NSMutableSet;

@interface IESAccountSwitchAccountInject : NSObject <IESAccountSwitchAccountDelegate>

@property (retain, nonatomic) NSMutableSet *verifiedUids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceCommonAdapterClass;
+ (Class)aAWEUserCommonAdapterClass;
+ (Class)aAWEUserDOUYINAdapterClass;
+ (Class)aAWEUserDOUYINLGAdapterClass;

- (BOOL)shouldLimitFansCount:(long long)a0 userId:(id)a1;
- (unsigned long long)verifyTypeForPlatform:(unsigned long long)a0 currentAccount:(id)a1 targetAccount:(id)a2;
- (void)updateCheckBoxColor:(id)a0;
- (BOOL)showHotsoonTagOnSwitchAccount;
- (id)aAWEUserModuleServiceCommonAdapter;
- (id)aAWEUserCommonAdapter;
- (void)updateVCDVerifiedUid:(id)a0;
- (BOOL)shouldAssistedAccountNoticePhoneLogin;
- (id)aAWEUserDOUYINAdapter;
- (id)aAWEUserDOUYINLGAdapter;
- (id)generateUserFromAccount:(id)a0;
- (id)noticeOfUserId:(id)a0;
- (void)saveSwitchUserResult:(id)a0 response:(id)a1 fromAccount:(id)a2 toAccount:(id)a3 completion:(id /* block */)a4;
- (id)multiUserList;
- (BOOL)isMultiUserCurrentUser:(id)a0;
- (void)addAccountEnterMethod:(id)a0 isCreateAccount:(BOOL)a1 completion:(id /* block */)a2;
- (void)preCheckBeforeCellClicked:(id /* block */)a0;
- (void)sendMessageBeforeSwitchUser:(id)a0;
- (long long)compareConversation:(id)a0 with:(id)a1;
- (long long)unReadNoticeCountOfUserId:(id)a0;
- (void)vcdVerifyBeforeSwitchFromUser:(id)a0 toUser:(id)a1 callback:(id /* block */)a2;
- (void)tryCreateSubAccountCompletion:(id /* block */)a0 source:(id)a1;
- (void)handleSwitchUserError:(id)a0 response:(id)a1 fromAccount:(id)a2 toAccount:(id)a3 completion:(id /* block */)a4;
- (void)handleSwitchRelationUserError:(id)a0 response:(id)a1 fromAccount:(id)a2 toAccount:(id)a3 completion:(id /* block */)a4;
- (void)handleSwitchVCDUserError:(id)a0 response:(id)a1 fromAccount:(id)a2 toAccount:(id)a3 completion:(id /* block */)a4;
- (void)handleRemoveMultiUserError:(id)a0 response:(id)a1 removeUser:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (long long)maxListCount;

@end
