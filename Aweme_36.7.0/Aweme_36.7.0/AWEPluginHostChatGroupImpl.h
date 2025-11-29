@class NSString, UIViewController;

@interface AWEPluginHostChatGroupImpl : NSObject <BDPHostChatGroupPluginDelegate>

@property (weak, nonatomic) UIViewController *alertController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)requestWithParams:(id)a0 completion:(id /* block */)a1;
- (id)scopesFromExtra:(id)a0;
- (id)checkNetworkResponse:(id)a0 error:(id *)a1;
- (void)requestCreateGroupInfoWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)getAuthCodeWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)requestOpenIDWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)requestCheckGroupInfoWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (id)getEnterGroupResult:(long long)a0 statusCode:(long long)a1;
- (void)showOpenPlatformAuthWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)showCreateAndCheckGroupAuthWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)showAuthAlertViewWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)_eventWithName:(id)a0 uniqueID:(id)a1 params:(id)a2;
- (void)bdp_joinGroupChatWithModel:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_transferToAwemeGroupChatConversationId:(id)a0;
- (void)bdp_joinGroupChatWithModel:(id)a0 completion:(id /* block */)a1;
- (void)bdp_createGroupInfoWithParam:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_joinGroupWithParam:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_checkGroupInfoWithParam:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_showEnterGroupWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
