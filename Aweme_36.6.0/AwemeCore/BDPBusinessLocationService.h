@class NSString, NSMutableDictionary;

@interface BDPBusinessLocationService : NSObject <BDPBusinessLocationService, BDPLocationManagerDelegate, BDPAPIMetricsReporterDelegate, BDPContainerLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *getLocationResultMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)onReportMetrics:(id)a0 uniqueID:(id)a1;
- (void)getPlaceWithCoord:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completion:(id /* block */)a1;
- (BOOL)isAppCanUseHighAccuracyLocation:(id)a0;
- (void)recordGetLocationApiResultInfo:(id)a0 callbackId:(id)a1 uniqueID:(id)a2;
- (id)onPoiPlaceResolve:(id)a0;
- (void)onStartUpdatingLocation;
- (void)onStopUpdatingLocation:(id)a0;
- (void).cxx_destruct;

@end
