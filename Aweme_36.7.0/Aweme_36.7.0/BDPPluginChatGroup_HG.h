@interface BDPPluginChatGroup_HG : BDPBridgeInstancePlugin

- (void)checkAndLoginWithParam:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (id)changeKeyNameWithDict:(id)a0 nameDict:(id)a1;
- (void)joinChatGroupWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createGroupInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)joinGroupWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkGroupInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerJoinUnionGroupWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
