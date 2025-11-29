@class RTVThrottlerConfig;

@interface RTVThrottler : NSObject

@property (retain, nonatomic) RTVThrottlerConfig *config;
@property (nonatomic, getter=isRunning) BOOL running;

- (id)__doExecute:(BOOL *)a0;
- (BOOL)__continueAfterExecute;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithConfig:(id)a0;

@end
