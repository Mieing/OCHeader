@interface IESLLLiveGlobalBridgeEventUtil : NSObject

+ (BOOL)publishEventWithName:(id)a0 params:(id)a1;
+ (id)subscribeEventNamed:(id)a0 callback:(id /* block */)a1;
+ (void)unsubscribe:(id)a0;

@end
