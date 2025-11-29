@interface BDHMXPerformanceAggregationUtility : NSObject

+ (BOOL)isRequestJSB:(id)a0;
+ (id)simplifyResourceDic:(id)a0 mainRes:(BOOL)a1 isLynx:(BOOL)a2;
+ (id)extractDataTypeFromURLString:(id)a0;
+ (BOOL)isSubResource:(id)a0 isLynx:(BOOL)a1;
+ (void)assemblePerformanceInfo:(id)a0 perfAggregation:(id)a1 navigationId:(id)a2 isLynx:(BOOL)a3;
+ (void)collectRequestInfoIfNeeded:(id)a0 perfAggregation:(id)a1 navigationId:(id)a2 event:(id)a3;
+ (void)collectResourceInfoIfNeeded:(id)a0 perfAggregation:(id)a1 navigationId:(id)a2 event:(id)a3 isLynx:(BOOL)a4;
+ (void)collectWebPerformanceInfoIfNeeded:(id)a0 perfAggregation:(id)a1 navigationId:(id)a2;
+ (void)collectLynxPerformanceInfoIfNeeded:(id)a0 perfAggregation:(id)a1 navigationId:(id)a2;

@end
