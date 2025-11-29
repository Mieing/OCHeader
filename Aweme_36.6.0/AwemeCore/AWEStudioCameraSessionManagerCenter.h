@interface AWEStudioCameraSessionManagerCenter : NSObject {
    void /* unknown type, empty encoding */ objectStack;
}

@property (class, nonatomic, readonly) AWEStudioCameraSessionManagerCenter *shared;

- (void)cleanWithCameraSessionManager:(id)a0;
- (id)getCameraSessionManagerWithUseMutex:(BOOL)a0 useWeakSubscription:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
