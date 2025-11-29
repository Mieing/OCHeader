@class ACCRecordViewControllerInputData;

@interface AWEPOIUGCRecordViewController : ACCRecordViewController

@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (copy, nonatomic) id /* block */ closeBlock;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)awesst_enterFrom;
- (id)awesst_additionalTrackerParams;
- (id)initWithInputData:(id)a0;
- (BOOL)routerAnimated;
- (void)prepareForLoadComponent;
- (void)close;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
