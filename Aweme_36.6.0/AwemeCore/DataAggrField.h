@class DataAggrFieldConfiguration;

@interface DataAggrField : NSObject {
    _Atomic unsigned long long aggr_cnt;
    double aggr_sum;
}

@property (weak, nonatomic) DataAggrFieldConfiguration *config;

- (id)aggregated;
- (BOOL)avalible;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)append:(id)a0;

@end
