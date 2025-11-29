@class NSString, NSMutableDictionary;

@interface SECRouteRecordLog : NSObject

@property (copy, nonatomic) NSString *routeTraceId;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (nonatomic) double happenTime;

- (id)initWithRouter:(id)a0;
- (void)updateContext:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)contextForKey:(id)a0;

@end
