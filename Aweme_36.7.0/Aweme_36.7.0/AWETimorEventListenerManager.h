@class NSMutableArray;

@interface AWETimorEventListenerManager : NSObject

@property (retain, nonatomic) NSMutableArray *eventListeners;

+ (id)shareInstance;

- (void)addTimorEventListener:(id)a0 subscribeEvent:(id)a1;
- (void)removeTimorEventListener:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
