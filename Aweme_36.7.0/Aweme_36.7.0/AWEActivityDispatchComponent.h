@class NSString, NSArray, AWEActivityTimerTask, NSMutableArray;

@interface AWEActivityDispatchComponent : NSObject <AWEActivityLifeCycleProtocol, AWEManagerProtocol, AWEHPActivityDispatchComponentProtocol>

@property (retain, nonatomic) NSMutableArray *managers;
@property (retain, nonatomic) AWEActivityTimerTask *timerTask;
@property (nonatomic) double timeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *objcs;

- (void)addNotifications;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (void)channelDidLoad;
- (void)setData:(id)a0 extraInfo:(id)a1;
- (id)initWithData:(id)a0 extraInfo:(id)a1;
- (id)getObjectWithIdentifer:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (void)timing;
- (void)removeObject:(id)a0;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)reset;

@end
