@class NSString, NSDictionary, NSArray, NSMutableDictionary;

@interface IESLivePipelineEngine : NSObject

@property (retain, nonatomic) NSString *currentStage;
@property (retain, nonatomic) NSDictionary *pipelineConfigs;
@property (retain, nonatomic) NSArray *injectionConfigs;
@property (retain, nonatomic) NSDictionary *modules;
@property (retain, nonatomic) NSMutableDictionary *pipelines;

- (id)initWithPipelineConfigs:(id)a0 injectionConfigs:(id)a1;
- (void)setupModules:(id)a0;
- (void)executeStage:(id)a0 withContext:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (id)createPipelineForStage:(id)a0;
- (void)clearPipelineForStage:(id)a0;
- (void)cancelStage:(id)a0;
- (void)clearAllPipelines;
- (BOOL)isExecutingStage:(id)a0;
- (id)currentExecutingStage;
- (void).cxx_destruct;

@end
