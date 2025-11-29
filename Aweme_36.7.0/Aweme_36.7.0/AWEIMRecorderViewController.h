@class ACCRecordViewControllerInputData, AWEStudioIdleTimerHandler, NSString;

@interface AWEIMRecorderViewController : ACCRecordViewController <BTMPageManagableProtocol>

@property (retain, nonatomic) AWEStudioIdleTimerHandler *idleTimerHandler;
@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)awesst_enterFrom;
- (id)awesst_additionalTrackerParams;
- (void)setBcmPageParams;
- (BOOL)routerAnimated;
- (void)prepareForLoadComponent;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
