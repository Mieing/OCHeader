@class NSString;
@protocol RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector;

@interface RTVInteractionSession : NSObject <RTVXRRoomSessionControllerObserver, RTVInteractionSessionInterface, RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *textChatConversationID;

- (long long)roomType;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (BOOL)useCastingPanelV2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)roomID;

@end
