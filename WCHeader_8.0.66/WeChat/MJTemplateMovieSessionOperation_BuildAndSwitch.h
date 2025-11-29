@class NSString, OMJTemplateBuildResult, OMJMovieOptions, OMJMovieOutroInfo;

@interface MJTemplateMovieSessionOperation_BuildAndSwitch : MJTemplateMovieSessionOperation

@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) OMJTemplateBuildResult *buildResult;
@property (copy, nonatomic) id /* block */ buildCompletionHandler;
@property (readonly, copy, nonatomic) NSString *templateID;
@property (readonly, copy, nonatomic) NSString *musicID;
@property (readonly, nonatomic) OMJMovieOptions *options;
@property (readonly, nonatomic) OMJMovieOutroInfo *outroInfo;

- (id)initWithMaasSession:(id)a0 sessionKey:(id)a1 templateID:(id)a2 musicID:(id)a3 options:(id)a4 outroInfo:(id)a5 buildResult:(id)a6 buildCompletionHandler:(id /* block */)a7 progressHandler:(id /* block */)a8 completionHandler:(id /* block */)a9;
- (void)start;
- (id)boundTemplateId;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_buildWithProgressHandler:(id /* block */)a0 buildCompletionHandler:(id /* block */)a1;
- (void)_switchTemplateWithBuildResult:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
