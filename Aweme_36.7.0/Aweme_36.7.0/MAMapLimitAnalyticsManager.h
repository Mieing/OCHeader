@class NSDictionary;

@interface MAMapLimitAnalyticsManager : NSObject

@property (retain, nonatomic) NSDictionary *limitEventCodeDic;

- (void)logLimitEvent:(unsigned long long)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
