@class ACCRecordViewControllerInputData;

@interface AWEECommerceRecorderViewController : ACCRecordViewController

@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;

- (id)awesst_enterFrom;
- (id)awesst_additionalTrackerParams;
- (id)currentProp;
- (BOOL)routerAnimated;
- (void)prepareForLoadComponent;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
