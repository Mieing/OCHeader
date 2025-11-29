@class NSString, IESECXBridgeEventSubscriber;

@interface AWEECXBridgeEventSubscriber : NSObject <AWEECXBridgeEventSubscriberProtocol>

@property (retain, nonatomic) IESECXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSubscribeEventNamed:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)unsubscribe;

@end
