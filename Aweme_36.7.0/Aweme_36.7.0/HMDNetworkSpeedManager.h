@class NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface HMDNetworkSpeedManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_blockArray;
    NSMutableArray *_uploadBytesArray_WIFI;
    NSMutableArray *_downloadBytesArray_WIFI;
    NSMutableArray *_uploadBytesArray_cellular;
    NSMutableArray *_downloadBytesArray_cellular;
    NSMutableArray *_dataTimeArray;
}

@property (nonatomic) double uploadSpeed_WIFI;
@property (nonatomic) double downloadSpeed_WIFI;
@property (nonatomic) double uploadSpeed_cellular;
@property (nonatomic) double downloadSpeed_cellular;
@property (nonatomic, getter=isCellularAvailable) BOOL cellularAvailable;
@property (nonatomic, getter=isWIFIAvailable) BOOL WIFIAvailable;
@property (nonatomic) double interval;
@property (nonatomic) double intendedAverageTime;
@property (nonatomic) BOOL repeat;
@property (readonly, nonatomic, getter=isStarted) BOOL started;

+ (void)averageSpeedOverTimeDuration:(double)a0 withBlockNoRepeat:(id /* block */)a1;

- (id)initWithInterval:(double)a0 intendedAverageTime:(double)a1 repeat:(BOOL)a2;
- (void)removeTimer_async;
- (id)addRegisterWithBlock:(id /* block */)a0;
- (void)addTimerAndCleanDataArray_async;
- (void)updateSpeedInformation_async;
- (void)cleanDataAndSetTheFirstObject_async;
- (void)removeRegistedBlock:(id)a0;
- (void)removeAllRegistedBlock;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)timerCallback;

@end
