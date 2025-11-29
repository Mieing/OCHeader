@interface MJTemplateMoviePlayerOperation_ShutDownPlayback : MJTemplateMoviePlayerOperation

- (void)start;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void)_shutDownPlaybackWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;

@end
