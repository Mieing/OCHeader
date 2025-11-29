@interface MJTemplateMovieSessionOperation_StopAssetClipping : MJTemplateMovieSessionOperation

- (id)initWithMaasSession:(id)a0 sessionKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)start;
- (id)boundTemplateId;
- (void)_stopAssetClippingWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;

@end
