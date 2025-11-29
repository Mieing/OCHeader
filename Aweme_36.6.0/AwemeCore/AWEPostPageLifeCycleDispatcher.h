@class NSString, NSMutableArray;
@protocol AWEPostPageLifeCycleMessage;

@interface AWEPostPageLifeCycleDispatcher : NSObject <AWEPostPageLifeCycleMessage>

@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) id<AWEPostPageLifeCycleMessage> multicastDelegate;
@property (copy, nonatomic) id /* block */ comparator;
@property (copy, nonatomic) id /* block */ perfTrackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)elementAppear;
- (void)audioSessionReset;
- (void)firstRenderDidFinish;
- (BOOL)containSubscriber:(id)a0;
- (void)p_observeNotifications;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)addSubscriber:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)removeSubscriber:(id)a0;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;

@end
