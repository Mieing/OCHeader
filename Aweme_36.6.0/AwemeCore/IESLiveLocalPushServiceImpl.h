@class NSString;

@interface IESLiveLocalPushServiceImpl : IESLiveGeneralBaseService <IESLiveLocalPushService, HTSLiveMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceRoomDataReady:(id)a0;
- (void)postLocalPushWithNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)showLiveLocalPush:(id)a0;
- (void)removeLiveLocalPushWithIdentifier:(id)a0;
- (void)messageReceived:(id)a0;

@end
