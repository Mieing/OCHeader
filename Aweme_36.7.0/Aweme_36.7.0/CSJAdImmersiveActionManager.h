@interface CSJAdImmersiveActionManager : NSObject

+ (id)sharedManager;

- (void)presentImmersivePageVC:(id)a0 context:(id)a1;
- (BOOL)handleImmersiveActionWithModel:(id)a0 context:(id)a1 fromVideo:(BOOL)a2;

@end
