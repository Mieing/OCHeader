@interface IESGCPXPlayGameAPI : IESGCPApi

- (id)baseHostURL;
- (void)recordOpenXPlayGameWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)requestGetDownloadInfoWithUnifiedGameId:(id)a0 scene:(id)a1 authorId:(id)a2 itemId:(id)a3 requestId:(id)a4 completion:(id /* block */)a5;
- (void)requestUnifiedGameIdWithXPlayId:(id)a0 completion:(id /* block */)a1;
- (void)requestGetGameMapByItemId:(id)a0 gameId:(id)a1 mapId:(id)a2 unifiedGameID:(id)a3 completion:(id /* block */)a4;
- (void)requestLoadingPageConfigWithGameId:(id)a0 playType:(long long)a1 mapID:(id)a2 unifiedGameID:(id)a3 completion:(id /* block */)a4;
- (void)requestGetEnjoyCardInfoByOrderId:(id)a0 completion:(id /* block */)a1;
- (void)modifyUserFreeTimeEventWithTaskType:(long long)a0 taskTimes:(long long)a1 freeTime:(long long)a2 reqId:(id)a3 completion:(id /* block */)a4;
- (void)getTxCloudGameUserAndGameInfoWithXPlayGameID:(id)a0 promoteGameID:(id)a1 completion:(id /* block */)a2;
- (void)reportSidebarFilterEvent:(long long)a0 actionId:(id)a1 interval:(long long)a2 packageName:(id)a3 channel:(id)a4 rtcRoomId:(id)a5 completion:(id /* block */)a6;
- (void)reportSubscriptionStatusWithType:(long long)a0 unifiedGameID:(id)a1 sceneType:(long long)a2 source:(long long)a3 completion:(id /* block */)a4;
- (void)getSubscriptionModalStatusWithSceneType:(long long)a0 unifiedGameID:(id)a1 completion:(id /* block */)a2;
- (void)getTXLoginInfoWithXPlayGameID:(id)a0 promoteGameID:(id)a1 ignoreLoginStatus:(BOOL)a2 completion:(id /* block */)a3;
- (void)txUpdateRoleAuthStatusWithGameID:(id)a0 isUnbind:(BOOL)a1 completion:(id /* block */)a2;
- (void)txLoginWithXPlayGameID:(id)a0 promoteGameID:(id)a1 txLoginType:(int)a2 xplayLogID:(id)a3 supplierPodID:(id)a4 zoneID:(id)a5 completion:(id /* block */)a6;
- (void)txUserCompleteAuthWithLogId:(id)a0 packageName:(id)a1 subChannel:(id)a2 completion:(id /* block */)a3;
- (void)getTxCloudGameUserTimeWithXPlayGameID:(id)a0 promoteGameID:(id)a1 completion:(id /* block */)a2;
- (void)queryPeakStatus:(id)a0 completion:(id /* block */)a1;
- (id)xplayServerHost;
- (void)requestBootConfigWithGameModel:(id)a0 completion:(id /* block */)a1;
- (void)payOrderWithOutOrderId:(id)a0 traceId:(id)a1 completion:(id /* block */)a2;
- (void)queryPeakStatus:(id)a0 initLogId:(id)a1 supplier:(unsigned long long)a2 completion:(id /* block */)a3;

@end
