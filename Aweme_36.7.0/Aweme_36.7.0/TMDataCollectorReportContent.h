@class NSDictionary;

@interface TMDataCollectorReportContent : NSObject

@property (readonly, nonatomic) NSDictionary *metric;
@property (readonly, nonatomic) NSDictionary *category;
@property (readonly, nonatomic) NSDictionary *extra;

- (id)initWithMetric:(id)a0 category:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
