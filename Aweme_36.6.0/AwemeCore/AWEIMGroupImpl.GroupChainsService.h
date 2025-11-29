@interface AWEIMGroupImpl.GroupChainsService : HTSService <AWEIMGroupChainsService>

- (id)groupChainsSettingModel;
- (id)groupChainsTechConfigModel;
- (void)requestGroupChainById:(id)a0 conversation:(id)a1 requestSource:(long long)a2;
- (void)requestGroupChainByRangeWithConversation:(id)a0 requestSource:(long long)a1;
- (long long)getGroupChainsLastTime:(id)a0;
- (void)openHunterContainerCreateGroupChainsWithConversation:(id)a0;
- (void)openHunterContainerJoinGroupChainsWithMessage:(id)a0 conversation:(id)a1;
- (void)preActiveGecko;
- (void)getLatestChainsInfoById:(id)a0 completion:(id /* block */)a1;
- (void)getGroupUserInfoWithParam:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
