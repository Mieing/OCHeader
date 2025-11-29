@interface IESLiveRoomIntroductionApi : HTSLiveApi

- (void)requestWithRoom:(id)a0 liveType:(id)a1 gameCategoryID:(id)a2 callback:(id /* block */)a3;
- (void)updateRoom:(id)a0 liveType:(id)a1 gameCategoryID:(id)a2 anchorSelectedPOIID:(id)a3 withData:(id)a4 callback:(id /* block */)a5;

@end
