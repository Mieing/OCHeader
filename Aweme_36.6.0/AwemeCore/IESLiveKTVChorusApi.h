@interface IESLiveKTVChorusApi : HTSLiveApi

- (void)handleApi:(id)a0 params:(id)a1 response:(id)a2;
- (void)startChorus:(id)a0 completion:(id /* block */)a1;
- (void)endChorus:(id)a0 reason:(int)a1 chorusId:(long long)a2 completion:(id /* block */)a3;
- (void)fetchSongList:(id /* block */)a0;

@end
