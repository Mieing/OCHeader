@interface WAAppTaskHandlerWrapper : NSObject

@property (copy, nonatomic) id /* block */ updateContactHandler;
@property (copy, nonatomic) id /* block */ launchTaskHandler;
@property (copy, nonatomic) id /* block */ launchResultHandler;
@property (copy, nonatomic) id /* block */ runningEventHandler;
@property (copy, nonatomic) id /* block */ bizCompleteHandler;
@property (copy, nonatomic) id /* block */ bizDataPipeHandler;

- (void).cxx_destruct;

@end
