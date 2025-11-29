@class NSMutableDictionary;

@interface TempoEventCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventHandlers;

- (void)unsubscribeEvent:(id)a0;
- (void)subscribeEvent:(id)a0 callback:(id)a1;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
