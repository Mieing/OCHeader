@class NSString, NSMutableDictionary;

@interface BDPMonitorEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double time;
@property (retain, nonatomic) NSMutableDictionary *metricData;
@property (retain, nonatomic) NSMutableDictionary *categoryData;
@property (retain, nonatomic) NSMutableDictionary *extraData;
@property (nonatomic) BOOL flushed;

+ (id)objectWithName:(id)a0;

- (id /* block */)addCommonParams;
- (id /* block */)timingNowS;
- (id /* block */)mapCategory;
- (id /* block */)mapExtra;
- (id /* block */)withDefaultParams;
- (id /* block */)_map:(unsigned long long)a0;
- (id /* block */)mapMetric;
- (id /* block */)timingNowMS;
- (id /* block */)flush;
- (void).cxx_destruct;
- (id /* block */)error;
- (id)description;
- (id /* block */)result;
- (id /* block */)extra;
- (id)initWithName:(id)a0;
- (id /* block */)category;
- (id /* block */)metric;

@end
