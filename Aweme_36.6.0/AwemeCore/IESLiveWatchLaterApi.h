@interface IESLiveWatchLaterApi : HTSLiveApi

- (void)requestPreviewWatchLiveWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestAddWatchLiveWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestCancelWatchLiveWithParams:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
