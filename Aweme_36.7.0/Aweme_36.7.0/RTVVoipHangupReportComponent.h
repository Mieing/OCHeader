@class NSString, NSMutableArray, RTVVoipModel;
@protocol RTVXRRoomMessageSender, RTVCallObserver, RTVVoipManagerInterface, RTVXRControllerInjector, RTVRoomSyncController;

@interface RTVVoipHangupReportComponent : NSObject <RTVCallObserverDelegate, RTVXRRoomMessageSenderObserver, RTVVoipHangupReportInterface>

@property (readonly, nonatomic) id<RTVCallObserver> callObserver;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVRoomSyncController> roomSyncController;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (retain, nonatomic) NSMutableArray *handledRoomIDs;
@property (retain, nonatomic) RTVVoipModel *voip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)messageSender:(id)a0 didReceiveMessage:(id)a1;
- (void)addVoIPObserver:(id)a0;
- (void)p_handleAudioSessionInterrupted:(id)a0;
- (void)p_handleVoipStateChanged:(id)a0;
- (void)p_dismissLocalNotification;
- (BOOL)p_showToastIfNeeded:(id)a0;
- (void)p_sendNoticeIfNeeded:(id)a0;
- (id)p_noticeTipsText:(id)a0;
- (id)p_callType:(id)a0;
- (BOOL)p_enableShowRecallHighLight:(id)a0;
- (void)showVoipInterruptedNotification:(long long)a0 isCurrentDevice:(BOOL)a1 shouldSendRTM:(BOOL)a2;
- (void)p_sendAudioInterruptedEndMessage:(long long)a0;
- (void)p_showVoipInterruptedNotification:(long long)a0 isCurrentDevice:(BOOL)a1 shouldSendRTM:(BOOL)a2;
- (id)p_interruptedTitle:(long long)a0 isCurrentDevice:(BOOL)a1;
- (BOOL)p_enableRTM;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;

@end
