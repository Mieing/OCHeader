@class ACCCameraSubscription;

@interface AWEAIPropTaskMessenger : NSObject

@property (retain, nonatomic) ACCCameraSubscription *subscription;

- (void)sendTaskStatusDidUpdateMessage;
- (void)sendFinishTaskMessageWithTaskId:(id)a0 isSucceeded:(BOOL)a1;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
