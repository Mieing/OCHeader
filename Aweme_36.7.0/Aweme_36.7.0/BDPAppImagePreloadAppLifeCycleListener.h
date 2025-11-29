@class NSString, BDPAppImagePreloadObject;

@interface BDPAppImagePreloadAppLifeCycleListener : NSObject <BDPBootLifeCycleMessage, BDPAppPreloadMessage>

@property (retain, nonatomic) BDPAppImagePreloadObject *imagePreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedListener;

- (void)applicationMetaFinishWithUniqueID:(id)a0 model:(id)a1 launchParam:(id)a2 schema:(id)a3 error:(id)a4;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)appPreloadFinishedWithModel:(id)a0 schema:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
