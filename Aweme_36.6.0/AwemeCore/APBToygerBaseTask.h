@class UIView, NSString, APBToygerRemoteConfig, APBTaskContext, NSMutableDictionary, DTFLogMonitor, APBToygerViewController, UIViewController, APBToygerDataCenter;
@protocol BioAuthTaskDelegate;

@interface APBToygerBaseTask : NSObject <IBioAuthTask>

@property (copy, nonatomic) NSString *taskName;
@property (retain, nonatomic) APBTaskContext *context;
@property (weak, nonatomic) NSMutableDictionary *pipeInfo;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) APBToygerViewController *currentViewController;
@property (weak, nonatomic) UIView *currentView;
@property (copy, nonatomic) id /* block */ bioCommandBlock;
@property (retain, nonatomic) APBToygerRemoteConfig *bisConfig;
@property (retain, nonatomic) APBToygerDataCenter *dataCenter;
@property (copy, nonatomic) NSString *bisToken;
@property (nonatomic) long long currentRetryCnt;
@property (nonatomic) BOOL soundStatus;
@property (nonatomic) BOOL isMYBank;
@property (retain, nonatomic) DTFLogMonitor *monitor;
@property (weak, nonatomic) id<BioAuthTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_pipeInfoObjectForKey:(id)a0 byType:(Class)a1;
- (void)eventQuitWithCompletionCallback:(id /* block */)a0;
- (void)handleRetryActionWithScene:(id)a0 buttonTitle:(id)a1 retryIncrement:(BOOL)a2;
- (void)handleExitActionWithScene:(id)a0 buttonTitle:(id)a1 exitReason:(int)a2 extAction:(id /* block */)a3;
- (void)handleContinueActionWithScene:(id)a0 buttonTitle:(id)a1 extaction:(id /* block */)a2;
- (void)invokeWithPipeInfo:(id)a0;
- (void)exitWithResult:(int)a0 failReason:(id)a1 retCodeSub:(id)a2 retMessageSub:(id)a3;
- (void)processEvent:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)reset;
- (void)dealloc;
- (id)getConfig;

@end
