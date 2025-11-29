@class NSString, OMJMovieOptions, OMJMovieOutroInfo;

@interface MJTemplateMovieSessionOperation_Recreate : MJTemplateMovieSessionOperation

@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, copy, nonatomic) NSString *templateID;
@property (readonly, copy, nonatomic) NSString *musicID;
@property (readonly, nonatomic) OMJMovieOptions *options;
@property (readonly, nonatomic) OMJMovieOutroInfo *outroInfo;

- (id)initWithMaasSession:(id)a0 sessionKey:(id)a1 templateID:(id)a2 musicID:(id)a3 options:(id)a4 outroInfo:(id)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)start;
- (id)boundTemplateId;
- (BOOL)hasFinishedPreparing;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)_cancelPreviousRecreationWithCompletionHandler:(id /* block */)a0;
- (void)_recreateWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
