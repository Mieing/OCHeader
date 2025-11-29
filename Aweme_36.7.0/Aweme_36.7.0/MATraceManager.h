@class NSString, NSOperationQueue, CLLocationManager, NSMutableArray;
@protocol MATraceDelegate;

@interface MATraceManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) CLLocationManager *locManager;
@property (retain, nonatomic) NSMutableArray *locationsBuffer;
@property (copy, nonatomic) id /* block */ traceLocationCallback;
@property (nonatomic) long long autoTraceQueryCount;
@property (nonatomic) long long autoTraceQueryId;
@property (nonatomic) long long autoTraceRequestCallbackId;
@property (retain, nonatomic) NSMutableArray *pendingQueryArray;
@property (retain, nonatomic) NSMutableArray *pendingOperations;
@property (nonatomic) long long autoTraceTriggerNum;
@property (nonatomic) long long autoTraceGroupMaxNum;
@property (nonatomic) long long autoTraceGroupIndex;
@property (nonatomic) long long autoTraceRequestIndex;
@property (retain, nonatomic) NSMutableArray *tracedLocations;
@property (retain, nonatomic) NSMutableArray *tracedPoints;
@property (retain, nonatomic) NSMutableArray *correctLocations;
@property (retain, nonatomic) NSMutableArray *requestLocations;
@property (retain, nonatomic) NSMutableArray *correctPoints;
@property (retain, nonatomic) NSMutableArray *triggerLocations;
@property (retain, nonatomic) NSMutableArray *autoTraceQueryOperations;
@property (nonatomic) double autoTraceDistance;
@property (weak, nonatomic) id<MATraceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestLocationAuthorizationIfNeed;
- (void)doQueryWith:(id)a0;
- (void)triggerAutoTraceQuery;
- (id)fixTracePointsFrom:(id)a0 withLocations:(id)a1;
- (void)handleAutoTraceResponse:(id)a0 request:(id)a1 error:(id)a2 withOperation:(id)a3;
- (void)tryToTriggerAutoQueryCallback;
- (id)queryProcessedTraceWith:(id)a0 type:(long long)a1 processingCallback:(id /* block */)a2 finishCallback:(id /* block */)a3 failedCallback:(id /* block */)a4;
- (void)resetAutoQueryStatus;
- (void)startUpdatingLocation;
- (void).cxx_destruct;
- (void)stopUpdatingLocation;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;

@end
