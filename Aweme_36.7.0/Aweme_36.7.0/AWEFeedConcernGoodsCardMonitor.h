@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEFeedConcernGoodsCardMonitor : NSObject

@property (copy, nonatomic) id /* block */ fpsCallback;
@property (retain, nonatomic) NSMutableArray *fpsRecords;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;

+ (BOOL)collectEnabled;
+ (id)settings;

- (void)startFPSMonitor;
- (id)getFeedGoodsCardFPSMonitorData;
- (void)clearMonitorData;
- (void).cxx_destruct;
- (id)init;
- (id)stop;
- (void)start;
- (void)stopMonitor;

@end
