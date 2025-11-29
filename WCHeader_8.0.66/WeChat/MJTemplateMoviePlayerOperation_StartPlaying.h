@interface MJTemplateMoviePlayerOperation_StartPlaying : MJTemplateMoviePlayerOperation

- (void)start;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void)_startPlayingWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;

@end
