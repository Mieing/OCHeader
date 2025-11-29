@interface IESLiveGameOpenPlatformAnchorMessageProxy : IESLiveGameOpenPlatformMessageProxy

- (void)_invalidParamsFailCallback:(id /* block */)a0;
- (void)_jsbLoginFailCallback:(id /* block */)a0;
- (id)responseDataTransfer:(id)a0;
- (id)_extraWithTimeliness:(unsigned long long)a0;
- (BOOL)micOpenApiPreCheckWithParams:(id)a0 callback:(id /* block */)a1;
- (void)micOpenApiResultWithData:(id)a0 error:(id)a1 callback:(id /* block */)a2;
- (void)invoke_sendMessageToAudiences_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_subscribeSpecifiedContentComment_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_unsubscribeAllSpecifiedContentComment_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_subscribeSpecifiedUserComment_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_unsubscribeAllSpecifiedUserComment_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_subscribeAudiencesFollowAction_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_unsubscribeAudiencesFollowAction_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_showAllAudienceCornerMark_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_showSpecifiedAudienceCornerMark_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_inviteLiveUser_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_kickOffMic_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_disableLiveCamera_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_enableLiveCamera_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_disableLiveMic_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_enableLiveMic_withParams:(id)a0 callback:(id /* block */)a1;
- (BOOL)_checkUserLoginBeforeInvoke:(id /* block */)a0;

@end
