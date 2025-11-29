@class NSString, BDXBridgeEventSubscriber;

@interface IESECXBridgeEventSubscriber : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) BDXBridgeEventSubscriber *xSubscriber;

+ (void)unsubscribeWithEventName:(id)a0 xSubscriber:(id)a1;
+ (id)ecSubscriberWithName:(id)a0 xSubscriber:(id)a1;

- (void).cxx_destruct;
- (BOOL)unsubscribe;
- (void)dealloc;

@end
