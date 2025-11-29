@class NSString, NSMutableDictionary, AWETrackerDataTransmissionContainer;

@interface AWETrackerDataTransmissionObject : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rangeLock;
}

@property (retain, nonatomic) NSMutableDictionary *event2BlockDict;
@property (weak, nonatomic) AWETrackerDataTransmissionContainer *objContainer;
@property (retain, nonatomic) NSString *dataNodeClassStr;
@property (nonatomic) unsigned long long dataNodeInstanceAddr;

- (void)applyBlockWithEvent:(id)a0 params:(id)a1 trackerContext:(id)a2;
- (id)saveBlockForEvent:(id)a0 withBlockObj:(id)a1;
- (id)getBlockForEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
