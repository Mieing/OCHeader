@interface IESLiveCheckApi : HTSLiveApi

- (void)checkUserOnlineWithParams:(id)a0 completion:(id /* block */)a1;
- (void)subscribeLiveStatusWithParams:(id)a0 completion:(id /* block */)a1;

@end
