@class OMJMovieOptions, NSString, OMJMovieOutroInfo, OMJTemplateBuildResult, MJAITemplateReporter, MJAIAssetProcessor;

@interface MJTemplateMovieSessionOperation_BuildAndSwitchAI : MJTemplateMovieSessionOperation

@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) double progress;
@property (nonatomic) double AIAssetProcessorProgress;
@property (nonatomic) double templateSwitchingProgress;
@property (retain, nonatomic) OMJTemplateBuildResult *buildResult;
@property (copy, nonatomic) id /* block */ buildCompletionHandler;
@property (retain, nonatomic) MJAITemplateReporter *AITemplateReporter;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, copy, nonatomic) NSString *templateID;
@property (readonly, copy, nonatomic) NSString *musicID;
@property (readonly, copy, nonatomic) NSString *AIModelType;
@property (readonly, nonatomic) MJAIAssetProcessor *AIAssetProcessor;
@property (readonly, nonatomic) OMJMovieOptions *options;
@property (readonly, nonatomic) OMJMovieOutroInfo *outroInfo;

- (id)initWithMaasSession:(id)a0 sessionKey:(id)a1 scene:(unsigned long long)a2 templateID:(id)a3 musicID:(id)a4 AIModelType:(id)a5 AIAssetProcessor:(id)a6 options:(id)a7 outroInfo:(id)a8 buildResult:(id)a9 buildCompletionHandler:(id /* block */)a10 progressHandler:(id /* block */)a11 completionHandler:(id /* block */)a12;
- (void)start;
- (id)boundTemplateId;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_observeAIAssetProcessorWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_buildWithProgressHandler:(id /* block */)a0 buildCompletionHandler:(id /* block */)a1;
- (void)_switchTemplateWithBuildResult:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
