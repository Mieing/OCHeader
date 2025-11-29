@interface DitoDelayer : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double timeInterval;
@property (copy, nonatomic) id /* block */ invokeBlock;
@property (nonatomic) BOOL isInvoked;
@property (nonatomic) long long callCount;

- (void)updateDelayeStartTime;
- (void)callInvokeBlock;
- (void)delayedInvoke:(id /* block */)a0 afterTimeInterval:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
