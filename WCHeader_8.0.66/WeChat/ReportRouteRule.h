@class NSNumber;

@interface ReportRouteRule : NSObject

@property (retain, nonatomic) NSNumber *routeType;
@property (retain, nonatomic) NSNumber *routeRule;
@property (retain, nonatomic) NSNumber *isBatchReport;

+ (id)makeWithRouteType:(id)a0 routeRule:(id)a1 isBatchReport:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
