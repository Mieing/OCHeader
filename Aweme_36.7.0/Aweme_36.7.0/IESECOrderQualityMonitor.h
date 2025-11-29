@class NSMutableDictionary;

@interface IESECOrderQualityMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *performanceParams;
@property (nonatomic) unsigned long long queryType;

+ (void)trackMonitorForPreloadResource:(id)a0 bundleId:(id)a1;
+ (id)order_baseParams;

- (id)btmID;
- (void)trackMonitorWithParams:(id)a0;
- (void)trackMonitorWithErrorType:(id)a0 message:(id)a1 extra:(id)a2;
- (void)trackMonitorWithType:(id)a0 extraDict:(id)a1;
- (void)trackShowWithStatus:(id)a0 extraParams:(id)a1;
- (void)trackStartWithParams:(id)a0;
- (void)trackMonitorWithChunkRequestPerf:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueryType:(unsigned long long)a0;
- (id)pageName;

@end
