@interface MJTemplateMoviePlayerOperation_StopPlaying : MJTemplateMoviePlayerOperation

- (void)start;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;

@end
