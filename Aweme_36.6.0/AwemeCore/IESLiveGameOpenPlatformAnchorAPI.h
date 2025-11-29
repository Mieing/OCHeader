@class NSString;

@interface IESLiveGameOpenPlatformAnchorAPI : IESLiveGameOpenPlatformCommonAPI <IESLiveGameOpenPlatformAnchorOpenAPIServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildMicApiCommonWithAppID:(id)a0 openIds:(id)a1;
- (void)postMicApiRequestWithUrl:(id)a0 params:(id)a1 class:(Class)a2 callback:(id /* block */)a3;
- (void)sendAppID:(id)a0 message:(id)a1 toAudiences:(id)a2 timeliness:(unsigned long long)a3 extra:(id)a4 callback:(id /* block */)a5;
- (void)subscribeCommentWithAppID:(id)a0 keyWordList:(id)a1 callback:(id /* block */)a2;
- (void)unsubscribeCommentWithKeyWordListWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)subscribeCommentWithAppID:(id)a0 openUIDList:(id)a1 callback:(id /* block */)a2;
- (void)unsubscribeCommentWithOpenUIDListWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)subscribeAudiencesFollowActionWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)unsubscribeAudiencesFollowActionWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)requestSpecAudienceCornerMarkWithAppId:(id)a0 openIds:(id)a1 callback:(id /* block */)a2;
- (void)requestAllAudienceCornerMarkWithAppId:(id)a0 callback:(id /* block */)a1;
- (void)requestInviteLiveUserWithAppID:(id)a0 openIds:(id)a1 callback:(id /* block */)a2;
- (void)requestKickOffUserWithAppID:(id)a0 openIds:(id)a1 callback:(id /* block */)a2;
- (void)requestOperateCameraWithAppID:(id)a0 openIds:(id)a1 disable:(long long)a2 callback:(id /* block */)a3;
- (void)requestOperateMicWithAppID:(id)a0 openIds:(id)a1 disable:(long long)a2 callback:(id /* block */)a3;
- (void)requestExplainCardStatusWithAppId:(id)a0 roomId:(id)a1 callback:(id /* block */)a2;
- (void)updateExplainCardStatusWithAppId:(id)a0 roomId:(id)a1 status:(unsigned long long)a2 callback:(id /* block */)a3;
- (void)requestRevenueRankListWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)requestRevenueRankTotalDiamondsWithAppID:(id)a0 callback:(id /* block */)a1;

@end
