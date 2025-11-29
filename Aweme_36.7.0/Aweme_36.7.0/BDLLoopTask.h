@class CLLocation, NSString, NSTimer, CLLocationManager, BDLocationHMDCommonData, BDUGLocationOption, NSDictionary;
@protocol BDUGCertProtocol;

@interface BDLLoopTask : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (copy, nonatomic) NSString *locateId;
@property (nonatomic) long long desiredAccuracy;
@property (retain, nonatomic) id<BDUGCertProtocol> cert;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSTimer *loopTimer;
@property (nonatomic) double startLocationTime;
@property (retain, nonatomic) BDLocationHMDCommonData *commonData;
@property (retain, nonatomic) BDUGLocationOption *option;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *uploadSource;
@property (retain, nonatomic) NSString *expName;
@property (retain, nonatomic) NSDictionary *locationInfoDic;
@property (nonatomic) long long locSteps;
@property (retain, nonatomic) CLLocation *coordinateLocation;
@property (nonatomic) long long finalSteps;
@property (nonatomic) double finalDuration;
@property (retain, nonatomic) NSString *continueLocOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)consume:(id)a0 error:(id)a1 timeGap:(double)a2 timeDuration:(double)a3 isTimeout:(BOOL)a4;
- (void)_loopLocationTimeoutFired;
- (void)monitorForLocSteps:(long long)a0 duration:(double)a1 origin:(id)a2 error:(id)a3 isTimeout:(BOOL)a4;
- (id)getFinalLocationWithEndTime:(double)a0 Location:(id)a1;
- (void)saveCoordinateLocation:(id)a0 endTime:(double)a1;
- (BOOL)shouldUseLocation:(id)a0 timeGap:(double)a1;
- (id)initWithLocateId:(id)a0 requestId:(id)a1 DesiredAccuracy:(long long)a2 uploadSource:(id)a3 cert:(id)a4 timeout:(double)a5 option:(id)a6 expName:(id)a7 commonData:(id)a8 completion:(id /* block */)a9;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)requestLocation;
- (void)finish;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;

@end
