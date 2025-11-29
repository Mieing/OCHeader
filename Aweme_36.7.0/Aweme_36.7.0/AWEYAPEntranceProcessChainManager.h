@class NSDictionary, AWEYAPEntranceRoutine, NSArray;
@protocol AWEYAPEntranceProcessStepDelegate;

@interface AWEYAPEntranceProcessChainManager : NSObject

@property (weak, nonatomic) id<AWEYAPEntranceProcessStepDelegate> delegate;
@property (weak, nonatomic) AWEYAPEntranceRoutine *routine;
@property (copy, nonatomic) NSDictionary *allSteps;
@property (copy, nonatomic) NSArray *stepOrder;
@property (nonatomic) long long nextStep;
@property (copy, nonatomic) id /* block */ completion;

- (void)p_processNextStep;
- (id)p_currAllRoutines;
- (id)initWithDelegate:(id)a0 routine:(id)a1;
- (void)processCompletion:(id /* block */)a0;
- (void)endProcess;
- (void).cxx_destruct;

@end
