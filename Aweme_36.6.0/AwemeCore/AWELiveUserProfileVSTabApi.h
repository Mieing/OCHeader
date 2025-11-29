@interface AWELiveUserProfileVSTabApi : HTSLiveApi

- (void)fetchPreviousInfoWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)fetchAwemeVSTabEpisodeListWithUserID:(id)a0 isLoadMore:(BOOL)a1 historyEpisodeID:(id)a2 cursor:(long long)a3 completion:(id /* block */)a4;

@end
