@class NSString, NSArray, NSDictionary, IESLivePipelineError;

@interface IESLivePipeline : NSObject

@property (nonatomic) unsigned long long currentStepIndex;
@property (retain, nonatomic) IESLivePipelineError *pipelineError;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isExecuting;
@property (readonly, nonatomic) NSString *stage;
@property (readonly, nonatomic) NSArray *steps;
@property (readonly, nonatomic) NSDictionary *modules;

- (void)executeSerialWithContext:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)finishExecutionWithResult:(id)a0 callback:(id /* block */)a1;
- (void)executeNextStepWithContext:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)executeWithContext:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (id)initWithStage:(id)a0 steps:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)cancel;

@end
