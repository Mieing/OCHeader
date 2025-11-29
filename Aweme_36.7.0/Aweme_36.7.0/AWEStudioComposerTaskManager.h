@interface AWEStudioComposerTaskManager : NSObject

@property (nonatomic) BOOL started;
@property (nonatomic) BOOL running;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ taskWillStart;
@property (copy, nonatomic) id /* block */ taskDidStop;

- (void)startWithTasks:(id)a0 completion:(id /* block */)a1;
- (void)manuallyCancel;
- (void)p_callbackWithError:(id)a0;
- (void)execute:(id)a0;
- (void).cxx_destruct;

@end
