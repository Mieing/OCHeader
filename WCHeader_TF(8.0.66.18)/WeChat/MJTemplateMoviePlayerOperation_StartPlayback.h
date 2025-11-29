@interface MJTemplateMoviePlayerOperation_StartPlayback : MJTemplateMoviePlayerOperation

- (void)start;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void)_startUpPlaybackWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;

@end
