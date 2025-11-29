@class NSString, NSNumber;

@interface LynxJSBlockingEntry : LynxPerformanceEntry

@property (retain, nonatomic) NSString *stage;
@property (retain, nonatomic) NSNumber *total_blocking_time;
@property (retain, nonatomic) NSNumber *total_blocking_count;
@property (retain, nonatomic) NSNumber *total_duration;
@property (retain, nonatomic) NSNumber *blocking_ratio;
@property (retain, nonatomic) NSNumber *avg_blocking_time;
@property (retain, nonatomic) NSNumber *time_after_fcp;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
