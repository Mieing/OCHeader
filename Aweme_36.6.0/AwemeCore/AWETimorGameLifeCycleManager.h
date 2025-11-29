@class NSString, NSMapTable;

@interface AWETimorGameLifeCycleManager : NSObject <BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage, BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) NSMapTable *serviceDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)shareInstance;

- (void)viewDidLoad:(id)a0 uniqueID:(id)a1;
- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)viewWillDisappear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0 closeType:(id)a1;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)registerLifeCycleService:(id)a0;
- (void)onGameFirstFrameDidShow:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
