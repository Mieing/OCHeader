@class NSString;

@interface AWETokamakModuleService : HTSService <AWETokamakModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)simulateExceptionWithConfig:(id)a0;
- (Class)tokamakLogUploaderClass;
- (void)onLastLaunchCrash:(id)a0;
- (void)startANR;
- (void)launchDidAppear;
- (void)cleanStorage;

@end
