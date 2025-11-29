@class NSString, NSTimer, CLLocationManager, BDUGLocationInfo, NSMutableArray;
@protocol BDUGCertProtocol;

@interface BDSingleLTask : BDLocateTask <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) id<BDUGCertProtocol> cert;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (nonatomic) double startLocationTime;
@property (nonatomic) double locTime;
@property (copy, nonatomic) id /* block */ timeoutCallback;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isCallbacked;
@property (retain, nonatomic) NSMutableArray *completionList;
@property (retain, nonatomic) NSMutableArray *timeoutCompletionList;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *expName;
@property (retain, nonatomic) BDUGLocationInfo *cacheLocationInfo;
@property (nonatomic) long long replaceTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)consume:(id)a0 error:(id)a1 timeGap:(double)a2 timeDuration:(double)a3;
- (id)desiredCache:(id)a0 locInfo:(id)a1;
- (id)initWithRequestId:(id)a0 DesiredAccuracy:(long long)a1 locateId:(id)a2 commonData:(id)a3 expName:(id)a4 cert:(id)a5 timeout:(double)a6 timeoutCallback:(id /* block */)a7 locTime:(double)a8 cacheLocationInfo:(id)a9 completion:(id /* block */)a10;
- (BOOL)bindCompletion:(id /* block */)a0 timeoutCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)requestLocation;
- (void)_timeoutTimerFired;
- (void)finish;
- (void)cancel;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;

@end
