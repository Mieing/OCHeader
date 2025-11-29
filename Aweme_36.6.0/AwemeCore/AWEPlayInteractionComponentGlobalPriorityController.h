@class NSPointerArray, AWEPlayInteractionComponentGlobalPriorityManager;

@interface AWEPlayInteractionComponentGlobalPriorityController : AWEPlayInteractionBaseController

@property (retain, nonatomic) AWEPlayInteractionComponentGlobalPriorityManager *globalPriorityManager;
@property (retain, nonatomic) NSPointerArray *allElements;

- (void)dealloc;
- (void)updateAllSubViews;
- (void)setupGlobalPriorityManager;
- (void)bindProperties;
- (void)processGlobalAvoid;
- (void)activateComponentWithAllElements;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
