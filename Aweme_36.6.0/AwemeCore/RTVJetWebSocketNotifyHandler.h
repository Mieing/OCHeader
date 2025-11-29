@class NSString, NSMutableDictionary;
@protocol RxInjector;

@interface RTVJetWebSocketNotifyHandler : NSObject <RTVJetWebNotifyMessageHandlerInterface>

@property (retain, nonatomic) NSMutableDictionary *notifyHandlerMap;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)registerNotifyHandler:(id)a0 ofService:(int)a1;
- (BOOL)handleReceivedMessage:(id)a0;
- (void)unregisterNotifyHandler:(id)a0 ofService:(int)a1;
- (void).cxx_destruct;

@end
