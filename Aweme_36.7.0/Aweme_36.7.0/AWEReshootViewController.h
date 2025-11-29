@class ACCRecordViewControllerInputData, AWEStudioIdleTimerHandler, NSString;
@protocol AWEReshootDelegate;

@interface AWEReshootViewController : ACCRecordViewController <AWEReshootViewControllerProtocol>

@property (retain, nonatomic) AWEStudioIdleTimerHandler *idleTimerHandler;
@property (weak, nonatomic) id<AWEReshootDelegate> delegate;
@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popSelf;
- (void)controllerTaskFinished;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
