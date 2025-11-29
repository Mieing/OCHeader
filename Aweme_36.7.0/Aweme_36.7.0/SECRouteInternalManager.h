@class NSString, SECRouteTrace, NSMutableDictionary;

@interface SECRouteInternalManager : NSObject <SECRouteInternalTrafficControl>

@property (retain, nonatomic) SECRouteTrace *buffer;
@property (weak, nonatomic) SECRouteTrace *lastFinishedTrace;
@property (retain, nonatomic) NSMutableDictionary *unfinishedTracesBySQRSession;
@property (retain, nonatomic) NSMutableDictionary *unfinishedTracesByURL;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL sceneStackEnabled;
@property (nonatomic) BOOL eventFlowDetectAllEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)SQRSessionWithURLString:(id)a0;

- (id)tryToConsumeTraffic;
- (void)clearUnfinishedTracesCache;
- (void)cacheUnfinishedTracesWithRouteTrace:(id)a0 URLString:(id)a1;
- (id)popUnfinishedTracesWithURLString:(id)a0;
- (id)checkin:(id)a0 fromPage:(id)a1 toPage:(id)a2 type:(id)a3;
- (void)finishRoute:(id)a0 fromPage:(id)a1 toPage:(id)a2;
- (void)trafficDidTerminated:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
