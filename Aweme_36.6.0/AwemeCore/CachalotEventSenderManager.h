@class NSMutableArray;

@interface CachalotEventSenderManager : NSObject

@property (retain, nonatomic) NSMutableArray *eventSenders;

+ (id)sharedEventSenders;
+ (void)registerEventSender:(id)a0;
+ (void)unregisterEventSender:(id)a0;
+ (id)sharedManager;

- (void)registerEventSender:(id)a0;
- (void)unregisterEventSender:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
