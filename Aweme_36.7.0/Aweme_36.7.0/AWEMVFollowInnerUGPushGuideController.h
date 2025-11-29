@class NSTimer, NSString;

@interface AWEMVFollowInnerUGPushGuideController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol>

@property (nonatomic) BOOL hasTrack;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *authorId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidLoad;
- (void)containerDidAppear:(BOOL)a0;
- (void)containerDidDisappear:(BOOL)a0;
- (void)didConsumptionSuccess;
- (void)disCommentSuccess;
- (void)didDiggSuccess:(id)a0;
- (void).cxx_destruct;
- (void)timerFired;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)addObserver;
- (void)dealloc;

@end
