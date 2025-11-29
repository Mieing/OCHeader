@protocol RxRetryManagerInterface, RTVXRControllerInjector, RxInjector, RTVXRRoomMessageSender;

@interface RTVFeedCMDMessageRetryableSender : NSObject

@property (readonly, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (retain, nonatomic) id<RxRetryManagerInterface> retryableManager;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RxInjector> injector;

- (void)rtv_awakeFromControllerInjector;
- (id)sendMessage:(id)a0 policy:(id)a1;
- (id)__sendMessageWithRTM:(id)a0 policy:(id)a1;
- (id)__sendMessageWithWS:(id)a0 policy:(id)a1;
- (void).cxx_destruct;

@end
