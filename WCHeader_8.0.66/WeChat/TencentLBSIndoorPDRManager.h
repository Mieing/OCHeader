@class NSMutableArray, TencentLBSSensorManager, NSObject;
@protocol OS_dispatch_source;

@interface TencentLBSIndoorPDRManager : NSObject

@property (retain) TencentLBSSensorManager *sensorManager;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pdrCalbackTimer;
@property double heading;
@property int startNum;
@property BOOL isBleLocationStart;
@property (copy, nonatomic) NSMutableArray *pdrCallBacks;
@property long long lastPdrUpdateT;
@property long long lastPdrCallbackT;
@property (nonatomic) long long startpdrT;
@property double bleArriveTime;
@property int mSteps;

+ (id)sharedInstance;

- (id)init;
- (void)setPdrCallBackBlock:(id /* block */)a0;
- (void)removePdrcallbackFromArray:(id /* block */)a0;
- (void)startPdr;
- (void)setPdrCoorType:(int)a0;
- (void)onBleLocationCreateWithlat:(double)a0 lng:(double)a1 accuracy:(double)a2 building:(id)a3 floor:(id)a4;
- (void)stopPdr;
- (int)obtainPdrSteps;
- (void)startPdrInPdrQueue;
- (void)inPdrQueueBleLocationCreateWithlat:(double)a0 lng:(double)a1 accuracy:(double)a2 building:(id)a3 floor:(id)a4;
- (void)stopPdrInQueue;
- (void).cxx_destruct;

@end
