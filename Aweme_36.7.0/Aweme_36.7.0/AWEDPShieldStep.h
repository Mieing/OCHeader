@class NSString;

@interface AWEDPShieldStep : AWEWorkflowStep

@property (copy, nonatomic) NSString *phase;

- (void)onStep:(id)a0 linkSession:(id)a1;
- (id)initWithPhase:(id)a0;
- (void).cxx_destruct;

@end
