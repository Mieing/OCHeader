@interface IESAccountSwitchCoordinator : NSObject

+ (void)showLimitToast;
+ (void)updateVCDVerifiedUid:(id)a0;
+ (void)generalSwitchToUserID:(id)a0 completion:(id /* block */)a1;
+ (void)handleAddUserEnterMethod:(id)a0 isCreateAccount:(BOOL)a1 completion:(id /* block */)a2;
+ (void)vcdSwitchUserActionFromUser:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
+ (void)tryGeneralSwitchUserFromUser:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
+ (void)handleSwitchError:(id)a0 user:(id)a1 callback:(id /* block */)a2;
+ (void)vcdSwitchUserFromUser:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
+ (void)relationSwitchUserFromUser:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
+ (void)generalSwitchUserFromUser:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
+ (void)handleAccountPhoneSystemLocked:(id)a0;
+ (void)removeUserIfNeeded:(id)a0 userID:(id)a1 callback:(id /* block */)a2;
+ (void)addUserActionCompletion:(id /* block */)a0 source:(id)a1;
+ (void)switchUserActionFromUser:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
+ (void)deleteUser:(id)a0 completion:(id /* block */)a1;
+ (void)fetchMultiListDataCompletion:(id /* block */)a0;

@end
