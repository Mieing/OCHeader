@class NSString;

@interface BDPAboutEasterEggManager : NSObject <BDPBootLifeCycleMessage>

@property (nonatomic) BOOL isAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)bootstrapLaunch;
+ (id)rebuildSchemaWithSchemaURL:(id)a0;
+ (BOOL)isDevModeOpenWithAppId:(id)a0;
+ (id)sharedManager;

- (void)registerMessage;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationLCPArrive:(id)a0 timestamp:(double)a1;
- (void)firstFrameDidShow:(id)a0;
- (void)delayShowEasterEggAlert:(id)a0;
- (void)showEasterEggAlert:(id)a0;
- (id)init;

@end
