@class NSString, RTVVoipEventHandler, NSMutableArray, RTVBufferedThrottler;
@protocol RTVVoipManagerInterface, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector;

@interface RTVVoipRoomUpdater : NSObject <RTVVoipEventObserver, RTVVoipRoomUpdater>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) RTVBufferedThrottler *throttler;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) RTVVoipEventHandler *eventHandler;
@property (retain, nonatomic) NSMutableArray *syncDefers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)didReceiveVoipCommandRoomUpdate:(id)a0;
- (id)syncRoomInfoFromServerWithReason:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
