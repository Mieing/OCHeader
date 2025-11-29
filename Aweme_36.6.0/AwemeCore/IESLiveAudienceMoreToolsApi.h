@interface IESLiveAudienceMoreToolsApi : HTSLiveApi

- (void)requestTempStateAreaDataWithRoomId:(id)a0 callback:(id /* block */)a1;
- (void)requestCollectGame:(id)a0 fromType:(id)a1 liveScene:(id)a2 anchorID:(id)a3 callback:(id /* block */)a4;
- (void)requestMorePanelInfoData:(id)a0 callback:(id /* block */)a1;

@end
