@interface IESVSVideoHistoryAPI : HTSLiveApi

- (void)getVideoHistoryByEpisodeIDs:(id)a0 complete:(id /* block */)a1;
- (void)videoPlayStats:(long long)a0;

@end
