@interface IESLivePrivilegeScreenChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy

- (id)buildData;
- (long long)buildingMode;
- (void)AsyncBuildData:(id /* block */)a0;
- (id)privilegeScreenChatMsg;
- (void)buildViewModelForSupremePartOnViewModel:(id)a0;
- (BOOL)filter;

@end
