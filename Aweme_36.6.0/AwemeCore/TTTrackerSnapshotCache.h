@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface TTTrackerSnapshotCache : NSObject

@property (retain, nonatomic) NSMutableArray *uuidList;
@property (retain, nonatomic) NSMutableDictionary *snapshotCache;
@property (retain, nonatomic) NSDictionary *uploadingSnapshot;

- (void)ack:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dequeue;

@end
