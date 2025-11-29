@class NSObject, AWENetworkQualityTracker, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWENetworkShardContext : NSObject

@property (retain, nonatomic) AWENetworkQualityTracker *tracker;
@property (retain, nonatomic) NSMutableArray *commonParamsWithURLTiming;
@property (retain, nonatomic) NSMutableArray *commonParamsNotL0Timing;
@property (retain, nonatomic) NSMutableArray *commonParamsTiming;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *seial_queue;

+ (id)shared;

- (void)addComParamsGetTiming:(double)a0;
- (void)addComParamsL0GetTiming:(double)a0;
- (void)addComParamsWithURLGetTiming:(double)a0;
- (void)trackCommonParamsTimingWithType:(long long)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
