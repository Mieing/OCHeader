@interface IESLiveScreencastLinkerApi : HTSLiveApi

- (void)searchForSuggestWordsWith:(id)a0 callback:(id /* block */)a1;
- (void)searchForResultWith:(id)a0 offset:(long long)a1 count:(long long)a2 searchID:(id)a3 searchScene:(long long)a4 callback:(id /* block */)a5;

@end
