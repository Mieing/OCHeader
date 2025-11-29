@class NSDictionary, NSArray;

@interface AWEPerfEvaluateCollectorManager : NSObject

@property (readonly, copy, nonatomic) NSDictionary *collectorJSONConfig;
@property (readonly, copy, nonatomic) NSArray *collectors;

- (id)collectFeatures;
- (id)initWithJSONConfig:(id)a0;
- (id)buildCollectors;
- (id)applogObservers;
- (void).cxx_destruct;

@end
