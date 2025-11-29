@interface IESLiveCommentVideoShareApi : HTSLiveApi

- (void)getVideoTabWithRoomId:(id)a0 callback:(id /* block */)a1;
- (void)getVideoListWithType:(int)a0 teenagerMode:(BOOL)a1 maxCursor:(id)a2 minCursor:(id)a3 count:(id)a4 callback:(id /* block */)a5;
- (void)videoShareRequestWithRoomId:(id)a0 itemId:(id)a1 itemType:(id)a2 tabType:(id)a3 callback:(id /* block */)a4;
- (void)searchVideoWithKeyWords:(id)a0 searchScene:(id)a1 offset:(long long)a2 pageCount:(long long)a3 searchID:(id)a4 callback:(id /* block */)a5;

@end
