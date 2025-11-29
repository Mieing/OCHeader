@interface LVDataBridge : NSObject

- (void)refineDraft:(id)a0 rootPath:(id)a1;
- (void)refineCoverDraft:(id)a0 rootPath:(id)a1;
- (void)refinePayload:(id)a0 rootPath:(id)a1;
- (void)__revertDraft:(id)a0;
- (void)__revertCoverDraft:(id)a0;
- (id)forwardBridge:(id)a0 atPath:(id)a1;
- (id)backwardBridge:(id)a0;
- (id)stringFromBackwardBridge:(id)a0;

@end
