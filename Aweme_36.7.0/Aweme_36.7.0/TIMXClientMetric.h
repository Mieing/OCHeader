@class NSString, NSMutableDictionary;

@interface TIMXClientMetric : NSObject <TIMXClientMetricProtocol, TIMXInstanceScopeAlwaysNewDIComponent>

@property (nonatomic) long long metricType;
@property (copy, nonatomic) NSString *k;
@property (nonatomic) long long v;
@property (retain, nonatomic) NSMutableDictionary *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
