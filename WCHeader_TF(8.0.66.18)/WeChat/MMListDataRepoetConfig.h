@class NSString, NSMutableArray;

@interface MMListDataRepoetConfig : NSObject

@property (copy, nonatomic) NSString *dr_viewId;
@property (retain, nonatomic) NSMutableArray *reportPolicyArray;
@property (retain, nonatomic) NSMutableArray *routeRuleArray;
@property (copy, nonatomic) id /* block */ dr_dynamicParamsBlock;

- (id)init;
- (void)addReportPolicy:(unsigned long long)a0 routeRule:(unsigned long long)a1 rtReport:(BOOL)a2;
- (void).cxx_destruct;

@end
