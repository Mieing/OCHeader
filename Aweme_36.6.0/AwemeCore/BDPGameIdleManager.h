@class NSDictionary, NSString, CAShapeLayer;

@interface BDPGameIdleManager : NSObject <BDPApplicationNotificationMessage, BDPContainerLifeCycleMessage>

@property (copy, nonatomic) NSDictionary *settings;
@property (nonatomic) BOOL disableTracker;
@property (weak, nonatomic) CAShapeLayer *cover;
@property (nonatomic) BOOL disableForTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)enterBackground:(id)a0;
- (void)enterForeground:(id)a0;
- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (void)viewWillDisappear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)turnOnIdle:(id)a0 type:(long long)a1;
- (void)turnOffIdle:(id)a0 type:(long long)a1;
- (void)removeScreenshot;
- (void)removeContainerCover:(id)a0;
- (void)reportData:(id)a0 type:(long long)a1;
- (void)turnOffIdle:(id)a0;
- (void)turnOnIdle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addScreenshot:(id)a0;

@end
