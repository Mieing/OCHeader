@class NSString, AWERVLVPerformanceMonitor;

@interface AWERVLVPerformanceController : AWERVBaseController

@property (copy, nonatomic) NSString *firstAwemeID;
@property (retain, nonatomic) AWERVLVPerformanceMonitor *lvPerformanceMonitor;

- (void)startInit;
- (void)trackPerformance;
- (void)bindEvents;
- (void)didConfigPageContext;
- (void)viewDidAppearAfter;
- (void)willRefreshWithAwemeModel:(id)a0;
- (void)refreshWithAwemeModelBeforeVideoViewControllerUpdate:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)getCurrentTime;
- (void)didInit;
- (void)viewDidDisappear;

@end
