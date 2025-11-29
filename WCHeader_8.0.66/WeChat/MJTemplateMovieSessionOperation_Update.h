@class OMJMovieOptions;

@interface MJTemplateMovieSessionOperation_Update : MJTemplateMovieSessionOperation

@property (retain, nonatomic) OMJMovieOptions *movieOptions;

- (id)initWithMaasSession:(id)a0 sessionKey:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)start;
- (id)boundTemplateId;
- (void)_updateMovieOptions:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
