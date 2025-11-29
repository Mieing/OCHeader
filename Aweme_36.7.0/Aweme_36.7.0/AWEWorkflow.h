@class NSMutableDictionary, AWEWorkflowStep, NSMutableArray, AWEDLMSession;

@interface AWEWorkflow : AWEWorkflowStep

@property (retain, nonatomic) NSMutableArray *pushSteps;
@property (readonly, nonatomic) AWEWorkflowStep *currentStep;
@property (nonatomic) BOOL isFlowStarted;
@property (retain, nonatomic) NSMutableDictionary *flowStore;
@property (retain, nonatomic) AWEDLMSession *linkSession;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ preStepBlock;

+ (id)workflowFromStep:(id)a0;

- (void)onStep:(id)a0 linkSession:(id)a1;
- (id)initWithStoreValue:(id)a0 linkSession:(id)a1;
- (void)setupObservation;
- (void)completeCurrentStep;
- (void)waitStep:(id)a0;
- (void).cxx_destruct;
- (void)next;
- (void)stopAll;
- (void)addStep:(id)a0;
- (void)addSteps:(id)a0;

@end
