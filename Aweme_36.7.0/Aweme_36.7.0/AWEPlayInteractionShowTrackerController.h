@interface AWEPlayInteractionShowTrackerController : AWEPlayInteractionBaseController

- (void)didDisplay;
- (id)showTrackerChainDictionary;
- (id)showTrackerRootListForGroupId;
- (id)showTrackerRootListForPlayletUniversalADParameters;
- (BOOL)enableAsyncToTransmissionNode;
- (id)longVideoShowTrackerRootListForGroupId;
- (void)setPlayletUniversalParametersIfNeeded;
- (void)setData:(id)a0;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
