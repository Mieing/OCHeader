@class NSDictionary, NSString;

@interface BDREReportContent : NSObject <BDRuleEngineReportDataSource>

@property (retain, nonatomic) NSDictionary *metric;
@property (retain, nonatomic) NSDictionary *category;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMetric:(id)a0 category:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
