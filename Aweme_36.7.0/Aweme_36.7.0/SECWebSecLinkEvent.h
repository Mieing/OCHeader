@class NSString, SECRouteTrace;

@interface SECWebSecLinkEvent : NSObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) double costTime;
@property (retain, nonatomic) SECRouteTrace *routeTrace;
@property (nonatomic) BOOL hybridSeclinkNewlyInstalled;
@property (copy, nonatomic) NSString *hybridSeclinkInstallResult;
@property (copy, nonatomic) NSString *hybridAction;
@property (copy, nonatomic) NSString *hybridStrategy;
@property (copy, nonatomic) NSString *hybridSeclinkScene;

- (void)recordStart;
- (void)recordEnd;
- (void)updateRouteTrace;
- (void).cxx_destruct;
- (id)eventType;

@end
