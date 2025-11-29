@interface IESLiveVSMessageBoardApi : HTSLiveApi

- (void)fetchVSMessageBoardInteractThumbupListWithRoomID:(id)a0 episodeID:(id)a1 ownerUserId:(id)a2 userID:(id)a3 completion:(id /* block */)a4;
- (void)fetchVSSelfCommentWithUserID:(id)a0 anchorID:(id)a1 episodeID:(id)a2 roomID:(id)a3 completion:(id /* block */)a4;
- (void)sendVSMessageBoardMessageWithRoomID:(id)a0 episodeID:(id)a1 ownerUserId:(id)a2 userID:(id)a3 content:(id)a4 nickname:(id)a5 entityId:(long long)a6 coverID:(long long)a7 badgeID:(long long)a8 replyParams:(id)a9 completion:(id /* block */)a10;
- (void)fetchVSMessageBoardDressUpListServiceWithRoomID:(long long)a0 episodeID:(long long)a1 loginEntityID:(long long)a2 UserID:(id)a3 completion:(id /* block */)a4;

@end
