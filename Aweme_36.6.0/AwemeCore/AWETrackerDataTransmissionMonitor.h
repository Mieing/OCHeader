@class NSMutableDictionary;

@interface AWETrackerDataTransmissionMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *transmissionNetworkNodes;
@property (retain, nonatomic) NSMutableDictionary *transmissionBlocks;
@property (retain, nonatomic) NSMutableDictionary *transmissionApplyRecordsMap;

+ (void)monitoredDidApplyTransmissionWithChain:(id)a0 trackerContext:(id)a1 applyResult:(id)a2 applyDuration:(double)a3;
+ (void)monitoredBlock:(id)a0 savedForEvent:(id)a1 didAttachedtoObj:(id)a2;
+ (id)transmissionNetworkNodes;
+ (id)transmissionApplyRecordsMap;
+ (id)transmissionBlocks;
+ (void)monitoredObject:(id)a0 didSetPreDataNode:(id)a1;
+ (id)visitTable;
+ (void)clearAll;
+ (id)sharedInstance;

- (void)monitoredDidApplyTransmissionWithChain:(id)a0 trackerContext:(id)a1 applyResult:(id)a2 applyDuration:(double)a3;
- (void)monitoredBlock:(id)a0 savedForEvent:(id)a1 didAttachedtoObj:(id)a2;
- (void)monitoredObject:(id)a0 didSetPreDataNode:(id)a1;
- (id)getTransNodeFor:(id)a0;
- (id)getToLeafChainsForTransNode:(id)a0;
- (void)monitoredObject:(id)a0 didGetTransmissionForEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
