@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, HARSensorDataController;

@interface HARSensorDataSampler : NSObject

@property (nonatomic) BOOL predicting;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *samplerDataQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *samplerOperateQueue;
@property (weak, nonatomic) id<HARSensorDataController> dataController;

- (void)destroyTimer;
- (void)stopSample;
- (void).cxx_destruct;
- (id)init;
- (void)startSample;

@end
