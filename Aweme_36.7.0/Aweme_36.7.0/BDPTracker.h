@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BDPTrackerSampleProtocol;

@interface BDPTracker : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSMutableArray *cache;
@property (retain, nonatomic) id<BDPTrackerSampleProtocol> trackerSampler;
@property (retain) NSArray *disableDelayList;
@property (copy, nonatomic) id /* block */ checkAppActive;
@property (nonatomic) BOOL delayExecute;

+ (void)event:(id)a0 attributes:(id)a1;
+ (void)flushCacheIfNeed;
+ (void)setCheckAppActive:(id /* block */)a0;
+ (void)executeBlkInTrackerQueue:(id /* block */)a0;
+ (void)eventV1:(id)a0 label:(id)a1 extra:(id)a2;
+ (void)event:(id)a0 attributes:(id)a1 ignoreALog:(BOOL)a2;
+ (void)setDisableDelayEventList:(id)a0;
+ (void)setTrackerSampleDelegate:(id)a0;
+ (id)sharedInstance;

- (BOOL)hasAppInTheForeground;
- (void)setTrackerSampleDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
