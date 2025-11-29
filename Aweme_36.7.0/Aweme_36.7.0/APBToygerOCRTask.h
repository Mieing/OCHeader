@class UIViewController;
@protocol APBTaskViewControllerProtocol;

@interface APBToygerOCRTask : APBToygerBaseTask

@property (weak, nonatomic) UIViewController<APBTaskViewControllerProtocol> *ocrVC;

- (void)invokeWithPipeInfo:(id)a0;
- (void)exitWithResult:(int)a0 failReason:(id)a1 retCodeSub:(id)a2 retMessageSub:(id)a3;
- (void)processEvent:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void).cxx_destruct;

@end
