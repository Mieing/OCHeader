@class NSDictionary, NSMutableDictionary;

@interface MAMapAnalyticsManager : NSObject

@property (retain, nonatomic) NSDictionary *eventCodeDic;
@property (retain, nonatomic) NSMutableDictionary *bindingDic;

+ (id)sharedInstance;

- (void)logEvent:(unsigned long long)a0 params:(id)a1;
- (void)logEvent:(id)a0 params:(id)a1 isStatisticsOnce:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
