@class NSString, NSMapTable, NSMutableDictionary;

@interface BDPHostEventListenersManager : NSObject <BDPWarmBootMessage, BDPBusinessSubscribeProtocol> {
    NSMutableDictionary *_eventListenersDict;
    NSMutableDictionary *_appListenersDict;
}

@property (retain, nonatomic) NSMapTable *timorEventListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)notifyHostEventDidChangeWithName:(id)a0 data:(id)a1;
+ (void)addTimorEventListener:(id)a0 subscribeEvent:(id)a1;
+ (void)removeTimorEventListener:(id)a0;
+ (void)notifyBusinessEventWithUniqueID:(id)a0 eventName:(id)a1 jsonString:(id)a2;
+ (void)notifySubscriberWithModel:(id)a0;
+ (void)notifyHostEventDidChangeWithAppID:(id)a0 eventName:(id)a1 data:(id)a2;
+ (void)notifyTimorEventWithName:(id)a0 data:(id)a1;
+ (void)removeHostEventListenerWithUniqueID:(id)a0;
+ (void)addHostEventListener:(id)a0 uniqueID:(id)a1 checkBlock:(id /* block */)a2;
+ (id)shareInstance;

- (void)addTimorEventListener:(id)a0 subscribeEvent:(id)a1;
- (void)removeTimorEventListener:(id)a0;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)notifyTimorEventWithName:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)addEventListener:(id)a0;
- (id)init;

@end
