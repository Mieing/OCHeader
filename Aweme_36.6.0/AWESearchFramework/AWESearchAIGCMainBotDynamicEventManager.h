@class BDXBridgeEventSubscriber, NSMutableDictionary;
@protocol AWESearchAIGCMainBotDynamicEventManagerDelegate;

@interface AWESearchAIGCMainBotDynamicEventManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventCallBacks;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (weak, nonatomic) id<AWESearchAIGCMainBotDynamicEventManagerDelegate> delegate;

- (void)subscribeEvent:(id)a0 callback:(id /* block */)a1;
- (void)subscribeEvent;
- (void)unSubscribeEvent;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
