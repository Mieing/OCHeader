@class NSObject;
@protocol OS_dispatch_queue;

@interface AWETokamakWatchdogSaver : NSObject {
    int enable;
    NSObject<OS_dispatch_queue> *sleepQueue;
    double willTerminateDelayTimeIn5s;
    double willTerminateDelayTimeIn10s;
    double willTerminateUNNotiLoopInterval;
    int willTerminateUNNotiLoopCount;
    double sceneUpdateDelayTimeIn10s;
    double sceneUpdateTriggerInterval;
    double sceneUpdateUNNotiLoopInterval;
    int sceneUpdateUNNotiLoopCount;
    double postUNInterval;
    int trackerSampling;
}

+ (id)sharedInstance;

- (void)monitorWillTerminate;
- (void)monitorSceneUpdate;
- (oneway void)myWillTerminateWithTransitionContext:(id)a0;
- (void)hookInnerClass:(Class)a0 innerClass:(Class)a1 originalSelector:(SEL)a2 swizzledSelector:(SEL)a3;
- (oneway void)mySceneID:(id)a0 updateWithSettingsDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)uploadToTeaSceneUpdate:(id)a0;
- (void)postUN:(long long)a0;
- (void).cxx_destruct;
- (void)start;
- (void)setupConfig;

@end
