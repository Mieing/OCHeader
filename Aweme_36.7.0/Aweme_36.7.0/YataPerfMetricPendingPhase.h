@class NSDictionary;

@interface YataPerfMetricPendingPhase : NSObject

@property (nonatomic) double startTimestamp;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)initWithStartTimestamp:(double)a0 extraParams:(id)a1;
- (void).cxx_destruct;

@end
