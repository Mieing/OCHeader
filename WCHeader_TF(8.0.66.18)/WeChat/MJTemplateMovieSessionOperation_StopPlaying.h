@interface MJTemplateMovieSessionOperation_StopPlaying : MJTemplateMovieSessionOperation

- (id)initWithMaasSession:(id)a0 sessionKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)start;
- (id)boundTemplateId;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;

@end
