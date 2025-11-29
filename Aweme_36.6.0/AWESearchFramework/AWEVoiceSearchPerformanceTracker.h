@interface AWEVoiceSearchPerformanceTracker : NSObject

@property (nonatomic) long long startTimestamp;
@property (nonatomic) long long readyTimestamp;

+ (void)trackAsrState:(unsigned long long)a0 msg:(id)a1;

- (void)trackWithEvent:(id)a0 trackType:(unsigned long long)a1 extra:(id)a2;
- (void)resetStartTimestamp;
- (void)resetReadyTimestampWithAsr:(BOOL)a0 record:(BOOL)a1;
- (void)trackWithEvent:(id)a0 trackType:(unsigned long long)a1;
- (void)trackHistoryReadCostWithParams:(id)a0;
- (id)init;

@end
