@interface IESLiveBigPartyApi : HTSLiveApi

- (void)openBigPartyGameWithRoomID:(id)a0 duration:(id)a1 callback:(id /* block */)a2;
- (void)finishBigPartyGameWithRoomID:(id)a0 reason:(long long)a1 callback:(id /* block */)a2;

@end
