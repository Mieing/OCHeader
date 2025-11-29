@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VERecordFrameDriver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *drivingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL isStart;
@property (nonatomic) unsigned long long drivingMode;
@property (nonatomic) unsigned long long drivingFPS;
@property (copy, nonatomic) id /* block */ drivingCallback;

- (void)startDriving;
- (void)stopDriving;
- (void).cxx_destruct;
- (id)init;

@end
