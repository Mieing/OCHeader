@interface IESLiveLGameAudienceApi : HTSLiveApi

- (void)fetchEntranceInfoWithParams:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (void)fetchLiveSumWithParams:(id)a0 completion:(id /* block */)a1;
- (void)checkLotteryUserRightWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchLotteryReportUserAction:(id)a0 header:(id)a1 retry:(long long)a2 completion:(id /* block */)a3;
- (void)fetchInstantPlayGetGameProcess:(id)a0 completion:(id /* block */)a1;

@end
