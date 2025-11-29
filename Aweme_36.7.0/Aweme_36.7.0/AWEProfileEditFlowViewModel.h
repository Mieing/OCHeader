@class NSArray, NSMutableDictionary, NSString, AWEProfileEditFlowContext;

@interface AWEProfileEditFlowViewModel : NSObject

@property (retain, nonatomic) NSArray *steps;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWEProfileEditFlowContext *context;
@property (retain, nonatomic) NSMutableDictionary *editStatusMap;
@property (readonly) long long totalSteps;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSString *multiFlowType;

- (void)goNextStep;
- (long long)indexOfStep:(id)a0;
- (void)goPreviousStep;
- (void)finishFlowWithTrakcer;
- (id)currentStep;
- (void).cxx_destruct;
- (id)stepAtIndex:(long long)a0;
- (void)startFlow;
- (id)initWithSteps:(id)a0;
- (void)finishFlow;

@end
