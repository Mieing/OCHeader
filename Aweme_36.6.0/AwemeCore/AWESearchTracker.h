@class NSDictionary, AWESearchTrackerOnceManager, AWETrackerContext;

@interface AWESearchTracker : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *log;
@property (retain, nonatomic) AWETrackerContext *context;
@property (retain, nonatomic) AWESearchTrackerOnceManager *onceManager;

+ (void)trackEvent:(id)a0 paramsBuilder:(id /* block */)a1;
+ (void)trackDoubleEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)trackEvent:(id)a0 paramsBuilder:(id /* block */)a1 to:(unsigned long long)a2;
+ (BOOL)enableSearchTracker;
+ (void)trackEventToV3AndU:(id)a0 paramsBuilder:(id /* block */)a1;
+ (void)trackEvent:(id)a0 label:(id)a1 value:(id)a2 extra:(id)a3 paramsBuilder:(id /* block */)a4;
+ (void)trackEventToV1AndV3:(id)a0 paramsBuilder:(id /* block */)a1;

- (id)logExtra;
- (void)trackEvent:(id)a0 paramsBuilder:(id /* block */)a1;
- (id)logExtraWithSearchParamsBuilder:(id /* block */)a0 paramsBuilder:(id /* block */)a1;
- (id)searchParamsWithBuilder:(id /* block */)a0;
- (void)trackSearchParamsEvent:(id)a0 searchParamsBuilder:(id /* block */)a1 paramsBuilder:(id /* block */)a2;
- (id)logExtraWithSearchParamsBuilder:(id /* block */)a0;
- (void)trackSearchParamsOnceEvent:(id)a0 uniqueID:(id)a1 searchParamsBuilder:(id /* block */)a2 paramsBuilder:(id /* block */)a3;
- (void)trackOnceEvent:(id)a0 uniqueID:(id)a1 paramsBuilder:(id /* block */)a2;
- (void)updateWithTracker:(id)a0;
- (void)appendLogWithBuilder:(id /* block */)a0;
- (void)appendExclusiveLogWithBuilder:(id /* block */)a0;
- (void)trackOnceEvent:(id)a0 uniqueID:(id)a1;
- (void)replaceLogWithBuilder:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)trackEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
