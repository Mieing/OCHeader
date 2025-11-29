@class CMMotionManager, NSObject;
@protocol OS_dispatch_queue, BDUGDeviceCollectDelegate;

@interface BDUGDeviceCollector : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _networkMutex;
}

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (weak, nonatomic) id<BDUGDeviceCollectDelegate> delegate;

- (id)appLocalSchemeList;
- (void)collectLaunchPhaseInfoWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
