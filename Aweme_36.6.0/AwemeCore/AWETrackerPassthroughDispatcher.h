@interface AWETrackerPassthroughDispatcher : NSObject

+ (void)addTrackerDeallocCallbackTo:(id)a0 with:(id /* block */)a1;
+ (id)aspectForEvent:(id)a0 block:(id /* block */)a1;
+ (id)applyAspectsForEvent:(id)a0 context:(id)a1;
+ (id)transmissionNodeInfoForEvent:(id)a0 withBlock:(id /* block */)a1;
+ (id)transmissionNodeInfoForEvent:(id)a0 withParams:(id)a1;
+ (id)applyTransmissionForEvent:(id)a0 forObject:(id)a1;
+ (id)applyTransmissionForEvent:(id)a0 forObject:(id)a1 trackerContext:(id)a2;
+ (id)transmissionChainForEvent:(id)a0 forObject:(id)a1;
+ (id)applyTransmissionWithChain:(id)a0 trackerContext:(id)a1;
+ (id)applyTrackerPassthroughForEvent:(id)a0 config:(id)a1;
+ (void)collectAllAspects;

@end
