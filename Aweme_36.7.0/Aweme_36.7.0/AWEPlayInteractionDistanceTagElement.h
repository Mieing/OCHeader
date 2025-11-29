@class NSString, AWEMarkView;

@interface AWEPlayInteractionDistanceTagElement : AWEPlayInteractionLeftElement <AWEFeedTagsPosPriorityAvoidElementProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEMarkView *distanceTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)hideComponent;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (void)distanceViewChangeInteraction;
- (long long)elementPriority;
- (void)updateDistanceTag;
- (void).cxx_destruct;
- (id)businessID;
- (void)viewDidLoad;
- (void)dealloc;

@end
