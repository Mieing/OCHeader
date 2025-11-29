@class __RTVXRBusinessRoomModel, NSString;
@protocol RTVMultipleDelegateInterface, RxInjector, RTVBusinessRoomObserver, RTVVoipContextManagerInterface;

@interface __RTVXRBusinessRoomContextManager : NSObject <RTVVoipObserver, RTVXRBusinessRoomContextManagerInterface, RTVXRBusinessContextSessionObserver>

@property (retain, nonatomic) __RTVXRBusinessRoomModel *activeRoom;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVBusinessRoomObserver> observers;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)voipServiceWillBegin:(id)a0 voip:(id)a1;
- (void)voipServiceWillFinish:(id)a0 voip:(id)a1;
- (BOOL)inRTVSession;
- (void)sessionProvider:(id)a0 willBeginSession:(id)a1;
- (void)sessionProvider:(id)a0 didFinishSession:(id)a1;
- (void)roomDidBegin:(id)a0;
- (void)roomWillFinish:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)currentRoom;

@end
