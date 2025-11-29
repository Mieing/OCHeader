@class NSString;

@interface AWEPlayInteractionHTSController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayerLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionControllerDOUYINHTSAdapterClass;

- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (void)onPlayerPause:(id)a0;
- (void)onPlayerStop:(id)a0;
- (void)onPlayerBeInserted:(id)a0;
- (id)aAWEPlayInteractionControllerDOUYINHTSAdapter;

@end
