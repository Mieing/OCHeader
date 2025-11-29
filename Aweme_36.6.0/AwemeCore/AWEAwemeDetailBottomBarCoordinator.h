@class NSString, UIView, NSMutableArray, NSObject;
@protocol AWEAwemeDetailBottomBarController, AWEAwemeDetailBottomBarLayoutManagerProtocol, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEAwemeDetailBottomBarCoordinator : NSObject <AWEAwemeDetailBottomBarCoordinatorProtocol, AWEAwemeNewDetailTableControllerProtocol>

@property (retain, nonatomic) NSMutableArray *bottomBarControllerArray;
@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarController> *activeBottomBarController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *aboveSubview;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarLayoutManagerProtocol> *layoutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)updateCurrentAwemeModel:(id)a0;
- (void)cellDidFullyDisplay:(id)a0 forRowAtIndexPath:(id)a1;
- (void)cellDidFullyDisappear:(id)a0 forRowAtIndexPath:(id)a1;
- (void)cellDidEndDisplay:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)updateBottomBarAlpha:(double)a0;
- (void)updateCurrentIndexPath:(long long)a0;
- (void)cellDidDisplay:(id)a0 forRowAtIndexPath:(long long)a1;
- (void)cellDidEndDisplay:(id)a0 forRowAtIndexPath:(long long)a1;
- (void)updatePlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)setBottomBarHidden:(BOOL)a0;
- (void)registerBottomBarContext:(Class)a0 withCreateBlock:(id /* block */)a1;
- (id)willActiveBottomBarController;
- (id)initWithContext:(id)a0 containerView:(id)a1 aboveSubview:(id)a2;
- (BOOL)shouldUseNewLayoutManager;
- (id)referStringWithContext:(id)a0;
- (void)hideBottomBarForAweme:(id)a0;
- (id)getCurrentPlayingStoryModelForOuterModel:(id)a0;
- (id)fixedButtonFeedAllowList;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;

@end
