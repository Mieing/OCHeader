@class NSError;

@interface AWEWorkflowStep : NSObject

@property (nonatomic) unsigned long long stepStatus;
@property (retain, nonatomic) NSError *stopError;

- (void)onStep:(id)a0 linkSession:(id)a1;
- (void).cxx_destruct;

@end
