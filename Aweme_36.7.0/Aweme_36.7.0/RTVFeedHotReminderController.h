@class NSTimer, RTVFeedHotReminderModel, NSString;
@protocol RTVFeedManagerInterface, RTVVoipWebServiceAdapterProtocol, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVInteractionConfigureManagerInterface, RTVFeedControllerInterface;

@interface RTVFeedHotReminderController : NSObject <RTVFeedObserver, RTVFeedHotReminderControllerInterface>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (retain, nonatomic) NSTimer *pollingTimer;
@property (readonly, weak, nonatomic) id<RTVFeedControllerInterface> feedController;
@property (retain, nonatomic) RTVFeedHotReminderModel *currentHotFeed;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, nonatomic) id<RTVFeedManagerInterface> feedManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ feedHotReminderCallback;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)feedController:(id)a0 willStartWithShareModel:(id)a1;
- (void)feedController:(id)a0 willFinishWithShareModel:(id)a1 reason:(long long)a2;
- (void)clearCurrentHotFeed;
- (void)__pollingHotReminder;
- (void)__stopHotReminderPolling;
- (void)__startHotReminderPolling;
- (void).cxx_destruct;

@end
