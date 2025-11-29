@class NSDictionary, NSMutableArray;

@interface AWETrackerAspectMonitor : NSObject

@property (copy, nonatomic) NSDictionary *event2AspectBlocksMap;
@property (retain, nonatomic) NSMutableArray *aspectApplyRecords;

+ (id)aspectApplyRecords;
+ (void)monitoredDidApplyAspectsForEvent:(id)a0 trackerContext:(id)a1 applyResult:(id)a2 applyTimeStamp:(double)a3 applyDuration:(double)a4;
+ (void)setupAspectsDictWhenFirstApply:(id)a0;
+ (id)event2AspectsDict;
+ (void)clearAll;
+ (id)sharedInstance;

- (void)monitoredDidApplyAspectsForEvent:(id)a0 trackerContext:(id)a1 applyResult:(id)a2 applyTimeStamp:(double)a3 applyDuration:(double)a4;
- (void)setupAspectsDictWhenFirstApply:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
