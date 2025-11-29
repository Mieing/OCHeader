@interface AWELiveSoloKTVDetailApi : HTSLiveApi

- (void)handleWithResponse:(id)a0 error:(id)a1 event:(id)a2 requestTimestamp:(double)a3;
- (void)fetchDetailSongInfoWithSongId:(id)a0 completion:(id /* block */)a1;
- (void)fetchVideoListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestFavoriteMusic:(id)a0 completion:(id /* block */)a1;

@end
