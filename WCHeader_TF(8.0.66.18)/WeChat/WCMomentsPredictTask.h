@class NSString;

@interface WCMomentsPredictTask : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) NSString *taskID;

- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)main;
- (void)didComplete;
- (void).cxx_destruct;

@end
