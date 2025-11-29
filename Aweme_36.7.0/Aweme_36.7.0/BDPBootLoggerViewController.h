@class NSString;

@interface BDPBootLoggerViewController : NSObject <BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationLCPArrive:(id)a0 timestamp:(double)a1;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)showPanel:(id)a0 instance:(id)a1;
- (void)destoryPanel:(id)a0;

@end
