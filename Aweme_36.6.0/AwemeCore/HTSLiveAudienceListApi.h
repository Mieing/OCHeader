@protocol IESLiveRoomService;

@interface HTSLiveAudienceListApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)getThisRoomAudienceListWithCompletion:(id /* block */)a0;
- (void)getCombinedAudienceListWithCompletion:(id /* block */)a0;
- (void)getThisWeekAudienceListWithCompletion:(id /* block */)a0;
- (void)getTotalAudienceListWithCompletion:(id /* block */)a0;
- (void)getVipAudienceListWithCompletion:(id /* block */)a0;
- (void)getOnlineAudienceListWithCompletion:(id /* block */)a0;
- (void)getSeqUserAudienceListWithcursor:(unsigned long long)a0 count:(unsigned long long)a1 isRefresh:(BOOL)a2 completion:(id /* block */)a3;
- (void)requestRankListWithLinkUser:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)preFetchAudienceRankListWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
