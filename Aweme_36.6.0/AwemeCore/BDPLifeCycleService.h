@class NSString;

@interface BDPLifeCycleService : NSObject <BDPLifeCycleService, BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)bootstrap;
- (void)dealloc;

@end
