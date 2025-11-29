@class NSDictionary, BDPUniqueID;

@interface BDPDebugEventTracker : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double connectedTime;
@property (nonatomic) double entrustTime;
@property (nonatomic) double readyTime;
@property (nonatomic) double closeTime;
@property (retain, nonatomic) NSDictionary *ideInfo;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

+ (id)debugRuntimeStatusOperationQueue;
+ (id)shareInstance;

- (id)debugDetailDurationWithResult:(id)a0;
- (void)debugEventTrackerStart:(id)a0 debugInfo:(id)a1;
- (void)debugEventTrackerResult:(id)a0 debugInfo:(id)a1 error:(id)a2;
- (void)debugEventTrackerRetry:(id)a0 retryCount:(long long)a1 debugInfo:(id)a2;
- (void)initTimeline;
- (void).cxx_destruct;

@end
