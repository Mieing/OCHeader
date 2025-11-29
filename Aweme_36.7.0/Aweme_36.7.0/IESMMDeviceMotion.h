@class NSOperationQueue, VEARCTask, CMMotionManager, CMAttitude, NSMutableArray, CMDeviceMotion;

@interface IESMMDeviceMotion : IESMMObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _data_lock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _block_lock;
}

@property (retain, nonatomic) NSMutableArray *updateBlocks;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) long long deviceOrientation;
@property (retain, nonatomic) CMAttitude *attitude;
@property (nonatomic) long long motionDetectCount;
@property (retain, nonatomic) VEARCTask *highDeviceMotionTask;
@property (retain, nonatomic) VEARCTask *highLevelTask;
@property (retain, nonatomic) CMDeviceMotion *lastMotionData;
@property (retain, nonatomic) NSOperationQueue *motionQueue;
@property (nonatomic) BOOL disableOrienrationDetecttion;

+ (id)sharedInstance;

- (void)addUpdateBlock:(id /* block */)a0;
- (void)calculateOrientation:(id)a0;
- (void)closeHighDeviceMotionMode;
- (BOOL)getAcclerate:(double *)a0 size:(unsigned long long)a1;
- (void)getAngularRate:(double *)a0 size:(unsigned long long)a1;
- (BOOL)getAttitude:(double *)a0 size:(unsigned long long)a1;
- (double)getMotionTimestamp;
- (void)getQuaternion:(float *)a0 size:(unsigned long long)a1;
- (id)getUpdateBlock;
- (void)openHighDeviceMotionMode;
- (void)removeUpdateBlock:(id /* block */)a0;
- (void)startDetectDeviceMotion;
- (void)stopDetectDeviceMotion;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
