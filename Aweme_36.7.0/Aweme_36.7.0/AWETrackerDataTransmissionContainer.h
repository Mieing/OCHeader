@class AWETrackerDataTransmissionObject, NSObject;

@interface AWETrackerDataTransmissionContainer : NSObject

@property (weak, nonatomic) NSObject *containerHolder;
@property (retain, nonatomic) AWETrackerDataTransmissionObject *dataObject;

+ (void)strategyWhenApplyTimeoutForEvent:(id)a0 withChain:(id)a1 withTimeout:(double)a2;
+ (id)applyTransmissionWithChain:(id)a0 withTrackerContext:(id)a1;

- (id)transmissionChainForEvent:(id)a0;
- (id)applyTransmissionForEvent:(id)a0 withTrackerContext:(id)a1;
- (id)saveParamsBlockForEvent:(id)a0 withBlockObj:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
