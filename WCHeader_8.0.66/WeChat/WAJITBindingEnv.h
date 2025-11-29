@class WAJITBindingMediaModule, NSString;

@interface WAJITBindingEnv : NSObject <JITRuntimeBindingDelegate>

@property (retain, nonatomic) WAJITBindingMediaModule *mediaModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)onCreateJITBindingContext:(id)a0;
- (void)onDestroyJITBindingContext;
- (void).cxx_destruct;

@end
