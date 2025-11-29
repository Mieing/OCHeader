@class NSMapTable, NSTimer, NSString, RTVFeedCMDMessageRetryableSender, UIViewController;
@protocol RTVUserProfileManagerInterface, AFDPlayRemoteFeedContainerViewControllerProtocol, RTVXRControllerInjector, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRRoomMessageSender;

@interface RTVFeedRequestSyncCommandController : NSObject <RTVXRRoomMessageSenderObserver, RTVFeedCMDMessageSendPolicy, RTVFeedRequestSyncCommandControllerInterface> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, weak, nonatomic) UIViewController<AFDPlayRemoteFeedContainerViewControllerProtocol> *remotePlayer;
@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, nonatomic) RTVFeedCMDMessageRetryableSender *retryCmdSender;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (nonatomic) double lastCmdReceivedTimeStamp;
@property (retain, nonatomic) NSMapTable *messageSendCallbacks;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) NSTimer *feedCommandCheckTimer;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long rtmRetryCount;
@property (readonly, nonatomic) unsigned long long wsRetryCount;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)sendFeedCommand:(id)a0;
- (void)updateRemotePlayer:(id)a0;
- (void)requestSyncCommandIfNeeded;
- (void)startFeedCommandCheck;
- (void)stopFeedCommandCheck;
- (void)messageSender:(id)a0 didReceiveMessage:(id)a1;
- (id)observeMessageSendSuccess:(id)a0;
- (void)removeObserveMessageSendSuccess:(id)a0;
- (BOOL)shouldSendMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
