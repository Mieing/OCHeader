@class NSString, NSMutableSet, UIWindow;
@protocol RTVInteractionServiceInterface, RxInjector;

@interface RTVInteractionApplicationService : NSObject <RTVJetWebNotifyMessageHandlerInterface, RTVApplicationService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVInteractionServiceInterface> interactionService;
@property (readonly, nonatomic) NSMutableSet *receivedPushSequenceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)rxAwakeFromPropertyInjection;
- (void)application:(id)a0 didCompleteLaunchWithOptions:(id)a1;
- (void)__handlePushMessage:(id)a0;
- (id)__sequenceIDWithPushMessage:(id)a0;
- (void)__ackWithPushMessage:(id)a0;
- (void)__handleInteractionPushMessage:(id)a0;
- (id)__pushMessageDataDic:(id)a0;
- (BOOL)handleReceivedMessage:(id)a0;
- (void).cxx_destruct;

@end
