@class NSString, NSTimer, BDUGLocationInfo, CLLocationManager, NSMutableArray, NSLock;
@protocol BDUGCertProtocol;

@interface BDLTask : BDLocateTask <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) id<BDUGCertProtocol> cert;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (nonatomic) double startLocationTime;
@property (nonatomic) long long status;
@property (nonatomic) double locTime;
@property (copy, nonatomic) id /* block */ timeoutCallback;
@property (copy, nonatomic) id /* block */ completion;
@property (retain) BDUGLocationInfo *locationResult;
@property (nonatomic) BOOL isCallbacked;
@property (retain, nonatomic) NSMutableArray *completionList;
@property (retain, nonatomic) NSMutableArray *timeoutCompletionList;
@property (retain, nonatomic) NSLock *callbackTagLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)consume:(id)a0 error:(id)a1;
- (BOOL)bindCompletion:(id /* block */)a0 timeoutCompletion:(id /* block */)a1;
- (id)initWithDesiredAccuracy:(long long)a0 cert:(id)a1 timeout:(double)a2 timeoutCallback:(id /* block */)a3 locTime:(double)a4 locateId:(id)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)requestLocation;
- (void)_timeoutTimerFired;
- (void)finish;
- (void)dealloc;
- (void)cancel;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;

@end
