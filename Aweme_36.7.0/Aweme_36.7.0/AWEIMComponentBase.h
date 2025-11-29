@class NSString, AWEIMComponentContext, AWEIMComponentManager;

@interface AWEIMComponentBase : NSObject <AWEIMComponentHostVCLifeCycle, AWEIMComponentLifeCycle>

@property (weak, nonatomic) AWEIMComponentManager *belongingManager;
@property (weak, nonatomic) AWEIMComponentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)actionPublisher:(id)a0;
- (void)bindService:(id)a0 target:(id)a1;
- (void)observeActions:(id)a0;
- (void)observeAction:(id)a0;
- (id)resolveMultiableService:(id)a0;
- (void)injectToMultiableService:(id)a0;
- (id)resolveService:(id)a0 inContext:(id)a1;
- (void)bindService:(id)a0 target:(id)a1 inContext:(id)a2;
- (void)deleteCurrentComponent;
- (void)observeAction:(id)a0 inContext:(id)a1;
- (void)unobserveAction:(id)a0 inContext:(id)a1;
- (id)siblingComponents;
- (void).cxx_destruct;
- (id)subComponents;

@end
